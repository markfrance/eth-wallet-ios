//
//  HexNSDecimalNumber.swift
//
//
// 04/05/2018.
//
//

import Foundation
import BigInt

@objc
extension NSString {
  func hexStringToDecimalString() -> NSString? {
    var str = self as String
    if str.hasPrefix("0x") {
      let indexStart = str.index(str.startIndex, offsetBy: 2)
      str = String(str[indexStart...])
    }
    
    guard let bigUInt = BigUInt(str, radix: 16) else { return nil }
    let decimalString = String(bigUInt, radix: 10)
    return decimalString as NSString
  }
}
