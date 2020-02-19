//
//  CheckboxButton+Blockies.swift
//
//
// 18/05/2018.
//
//

import Foundation
import BlockiesSwift

extension CheckboxButton {
  @objc
  func update(rightImageWithSeed seed: String) {
    let blockies = Blockies(seed: seed.lowercased())
    update(rightImage: blockies.createImage())
  }
}
