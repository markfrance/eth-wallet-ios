//
//  UIImage+MEWBackground.h
//
//
// 08/05/2018.
//
//

@import UIKit;

@interface UIImage (MEWBackground)
+ (instancetype) imageWithSeed:(NSString *)seed size:(CGSize)rSize;
- (instancetype) renderBackgroundWithSeed:(NSString *)seed size:(CGSize)size logo:(BOOL)renderLogo;
//Background cache
+ (instancetype) cachedBackgroundWithSeed:(NSString *)seed size:(CGSize)size logo:(BOOL)renderLogo;
+ (void) cacheImagesWithSeed:(NSString *)seed fullSize:(CGSize)fullSize cardSize:(CGSize)cardSize;
//Sizes
+ (CGSize) cardSize;
+ (CGSize) fullSize;
@end
