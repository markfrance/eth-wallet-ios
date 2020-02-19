//
//  String+HexPrefix.swift
//
//
// 04/05/2018.
//
//

import Foundation

extension String {
  func stripHexPrefix() -> String {
    if self.hasPrefix("0x") {
      let indexStart = self.index(self.startIndex, offsetBy: 2)
      return String(self[indexStart...])
    }
    return self
  }
  
  func addHexPrefix() -> String {
    if !self.hasPrefix("0x") {
      return "0x" + self
    }
    return self
  }
}
