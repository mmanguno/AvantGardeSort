@import Foundation;

@implementation AvantGardeSort

+ (NSArray *)avantGardeSortWithInitialArray:(NSArray *)initialArray {
	if (initialArray) {
		return [initialArray copyWithZone: NULL];
	}
	return nil;
}

@end