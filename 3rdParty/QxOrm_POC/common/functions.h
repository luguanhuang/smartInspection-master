/******************************************************************************
 * All right reserved. See COPYRIGHT for detailed Information.
 *
 * @file       functions.h
 * @brief      公共类
 *
 * @author     plusone_chen
 * @version    1.0.0(major.minjor.patch(主版本号.次版本号.修订号))
 * @date       2022/08/20
 * @history
 ************  1.
 ************  2.
 *****************************************************************************/
#ifndef FUNCTIONS_H
#define FUNCTIONS_H

class Functions {
public:
  /**
   * @brief 生成数据表主键
   * @return 数据表主键
   */
  static QString getUUidStr();
};

#endif // FUNCTIONS_H
