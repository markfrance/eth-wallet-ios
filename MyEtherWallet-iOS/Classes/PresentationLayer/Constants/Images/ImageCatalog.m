//
//  ImageCatalog.m
//
//
// 3/19/19.
//
//

#import "ImageCatalog.h"

typedef NSString *ImageCatalogName NS_TYPED_ENUM;

static ImageCatalogName const kInlineSmallShevron = @"inline_small_chevron";

@implementation ImageCatalog

+ (UIImage *) sharedInlineShevron {
  return [UIImage imageNamed:kInlineSmallShevron];
}

@end
