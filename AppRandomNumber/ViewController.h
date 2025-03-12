//
//  ViewController.h
//  AppRandomNumber
//
//  Created by Miriam Sanchez on 12/03/25.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (weak, nonatomic) IBOutlet UILabel *label1;
@property (weak, nonatomic) IBOutlet UILabel *label2;
- (IBAction)randomNumber:(id)sender;

- (IBAction)randomNumber50to100:(id)sender;

@end

