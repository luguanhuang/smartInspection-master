/******************************************************************************
 * All right reserved. See COPYRIGHT for detailed Information.
 *
 * @file       languagemanager.hpp
 * @brief      多语言切换封装类，使用枚举列举所有的语言，通过loadLanguage改变当前语言，在qml中
 *             使用qsTr()将需要多语言支持字符串封装起来，C++下使用QObject::tr()将需要多语言支持的字符串封装起来
 *             使用方式：
 *             1.在pri添加想要添加的 TRANSLATIONS += \
                                                        $$PWD/languages/utils_demo_en_US.ts \
                                                        $$PWD/languages/utils_demo_zh_CN.ts \
               2.通过qt自带lupdate工具生成对应的待翻译.ts文件  Tools->External->Linguist->lupdate 可以生成.ts文件
               3.对应ts文件翻译
               4.翻译完成后通过lrealease生成供程序调用的qm文件 Tools->External->Linguist->lrealease 生成与ts文件同目录的qm文件
               5.将qm文件拷贝到exe目录下供exe文件加载，具体路径查看loadLanguage函数

 *
 * @author     plusone_chen
 * @version    1.0.0(major.minjor.patch(主版本号.次版本号.修订号))
 * @date       2022/08/12
 * @history
 ************  1.
 ************  2.
 *****************************************************************************/
#ifndef LANGUAGEMANAGER_H
#define LANGUAGEMANAGER_H

#include <QObject>
#include <QQmlEngine>
#include <QTranslator>
#include <QGuiApplication>


class LanguageManager : public QObject
{
    Q_OBJECT
    Q_ENUMS(Enum_Language) //为了qml中能使用枚举，增加该行

public:
    enum Enum_Language
    {
        Chinese,
        English,
    };

public:

    static LanguageManager* instance(QQmlEngine *engine) {
        static LanguageManager controller(engine);
        return &controller;
    }

    void retranslateUi() {
        m_engine->retranslate();
    }

    Q_INVOKABLE void loadLanguage(Enum_Language lang) {
        switch (lang) {
        case Enum_Language::Chinese:
        {
            QString path = QGuiApplication::applicationDirPath()+"/languages/utils_demo_zh_CN.qm";
            if (m_translator->load(path)) {
                emit changeLanguageResponse(tr("--- Language changed to Chinese"));
            }
            break;
        }
        case Enum_Language::English:
            QString path = QGuiApplication::applicationDirPath()+"/languages/utils_demo_en_US.qm";
            m_translator->load(path);
            emit changeLanguageResponse(tr("--- Language changed to English"));
            break;
        }

        retranslateUi();
    }

private:
    LanguageManager(QQmlEngine *engine) {
        m_engine = engine;
        m_translator = new QTranslator(this);
        QGuiApplication::installTranslator(m_translator);
//        QCoreApplication::installTranslator(m_translator);
    }

    QQmlEngine *m_engine = nullptr;
    QTranslator *m_translator = nullptr;

signals:
    void changeLanguageResponse(const QString &msg);

};

#endif // LANGUAGEMANAGER_H
