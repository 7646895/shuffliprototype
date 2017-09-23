// Generated by Apple Swift version 3.1 (swiftlang-802.0.53 clang-802.0.42)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if defined(__has_attribute) && __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if defined(__has_attribute) && __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if defined(__has_feature) && __has_feature(modules)
@import UIKit;
@import CoreGraphics;
@import Foundation;
@import ObjectiveC;
@import FirebaseAuth;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class UIWindow;
@class UIApplication;

SWIFT_CLASS("_TtC4Test11AppDelegate")
@interface AppDelegate : UIResponder <UIApplicationDelegate>
@property (nonatomic, strong) UIWindow * _Nullable window;
- (BOOL)application:(UIApplication * _Nonnull)application didFinishLaunchingWithOptions:(NSDictionary<UIApplicationLaunchOptionsKey, id> * _Nullable)launchOptions SWIFT_WARN_UNUSED_RESULT;
- (void)applicationWillResignActive:(UIApplication * _Nonnull)application;
- (void)applicationDidEnterBackground:(UIApplication * _Nonnull)application;
- (void)applicationWillEnterForeground:(UIApplication * _Nonnull)application;
- (void)applicationDidBecomeActive:(UIApplication * _Nonnull)application;
- (void)applicationWillTerminate:(UIApplication * _Nonnull)application;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class UIButton;
@class UITextView;
@class UIImageView;
@class NSCoder;

SWIFT_CLASS("_TtC4Test10CustomCell")
@interface CustomCell : UITableViewCell
@property (nonatomic, strong) IBOutlet UIButton * _Null_unspecified buttonApprove;
@property (nonatomic, strong) IBOutlet UIButton * _Null_unspecified buttonDelete;
@property (nonatomic, strong) IBOutlet UITextView * _Null_unspecified fld_caption;
@property (nonatomic, strong) IBOutlet UIImageView * _Null_unspecified photo;
- (void)awakeFromNib;
- (void)setSelected:(BOOL)selected animated:(BOOL)animated;
- (nonnull instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString * _Nullable)reuseIdentifier OBJC_DESIGNATED_INITIALIZER SWIFT_AVAILABILITY(ios,introduced=3.0);
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UILabel;

SWIFT_CLASS("_TtC4Test17CustomCellCreator")
@interface CustomCellCreator : UITableViewCell
@property (nonatomic, strong) IBOutlet UIImageView * _Null_unspecified photo;
@property (nonatomic, strong) IBOutlet UILabel * _Null_unspecified imageCaption;
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified approveStatus;
- (void)awakeFromNib;
- (void)setSelected:(BOOL)selected animated:(BOOL)animated;
- (nonnull instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString * _Nullable)reuseIdentifier OBJC_DESIGNATED_INITIALIZER SWIFT_AVAILABILITY(ios,introduced=3.0);
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC4Test14CustomCellUser")
@interface CustomCellUser : UICollectionViewCell
@property (nonatomic, strong) IBOutlet UILabel * _Null_unspecified fld_username;
@property (nonatomic, strong) IBOutlet UIImageView * _Null_unspecified deleteUser;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class NSBundle;

SWIFT_CLASS("_TtC4Test21InitialViewController")
@interface InitialViewController : UIViewController
- (IBAction)btnAdminCreator:(id _Nonnull)sender;
- (IBAction)btnCreator:(id _Nonnull)sender;
- (void)segueToLoginWithVc_name:(NSString * _Nonnull)vc_name;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC4Test14ManageUserCell")
@interface ManageUserCell : UITableViewCell
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified userName;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified userEmail;
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified userImg;
- (void)awakeFromNib;
- (void)setSelected:(BOOL)selected animated:(BOOL)animated;
- (nonnull instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString * _Nullable)reuseIdentifier OBJC_DESIGNATED_INITIALIZER SWIFT_AVAILABILITY(ios,introduced=3.0);
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC4Test18SelectCategoryCell")
@interface SelectCategoryCell : UITableViewCell
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified categoryLabel;
- (void)awakeFromNib;
- (void)setSelected:(BOOL)selected animated:(BOOL)animated;
- (nonnull instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString * _Nullable)reuseIdentifier OBJC_DESIGNATED_INITIALIZER SWIFT_AVAILABILITY(ios,introduced=3.0);
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UITableView;

SWIFT_CLASS("_TtC4Test18TVC_SelectCategory")
@interface TVC_SelectCategory : UITableViewController
@property (nonatomic, copy) NSArray<NSString *> * _Nonnull categories;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (NSInteger)numberOfSectionsInTableView:(UITableView * _Nonnull)tableView SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (void)tableView:(UITableView * _Nonnull)tableView didSelectRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (nonnull instancetype)initWithStyle:(UITableViewStyle)style OBJC_DESIGNATED_INITIALIZER;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC4Test16TabBarController")
@interface TabBarController : UITabBarController
@property (nonatomic, copy) NSString * _Nullable selectedControllerId;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UIImage;
@class UIColor;
@class UIBezierPath;

/// Toucan - Fabulous Image Processing in Swift.
/// The Toucan class provides two methods of interaction - either through an instance, wrapping an single image,
/// or through the static functions, providing an image for each invocation.
/// This allows for some flexible usage. Using static methods when you need a single operation:
/// let resizedImage = Toucan.resize(myImage, size: CGSize(width: 100, height: 150))
/// Or create an instance for easy method chaining:
/// let resizedAndMaskedImage = Toucan(withImage: myImage).resize(CGSize(width: 100, height: 150)).maskWithEllipse().image
SWIFT_CLASS("_TtC4Test6Toucan")
@interface Toucan : NSObject
@property (nonatomic, strong) UIImage * _Nonnull image;
- (nonnull instancetype)initWithImage:(UIImage * _Nonnull)withImage OBJC_DESIGNATED_INITIALIZER;
/// Resize the contained image to the specified size by resizing the image to fit
/// within the width and height boundaries without cropping or scaling the image.
/// The current image on this toucan instance is replaced with the resized image.
/// \param size Size to resize the image to
///
///
/// returns:
/// Self, allowing method chaining
- (Toucan * _Nonnull)resizeByClipping:(CGSize)size SWIFT_WARN_UNUSED_RESULT;
/// Resize the contained image to the specified size by resizing the image to fill the
/// width and height boundaries and crops any excess image data.
/// The resulting image will match the width and height constraints without scaling the image.
/// The current image on this toucan instance is replaced with the resized image.
/// \param size Size to resize the image to
///
///
/// returns:
/// Self, allowing method chaining
- (Toucan * _Nonnull)resizeByCropping:(CGSize)size SWIFT_WARN_UNUSED_RESULT;
/// Resize the contained image to the specified size by scaling the image to fit the
/// constraining dimensions exactly.
/// The current image on this toucan instance is replaced with the resized image.
/// \param size Size to resize the image to
///
///
/// returns:
/// Self, allowing method chaining
- (Toucan * _Nonnull)resizeByScaling:(CGSize)size SWIFT_WARN_UNUSED_RESULT;
/// Mask the contained image with another image mask.
/// Note that the areas in the original image that correspond to the black areas of the mask
/// show through in the resulting image. The areas that correspond to the white areas of
/// the mask aren’t painted. The areas that correspond to the gray areas in the mask are painted
/// using an intermediate alpha value that’s equal to 1 minus the image mask sample value.
/// \param maskImage Image Mask to apply to the Image
///
///
/// returns:
/// Self, allowing method chaining
- (Toucan * _Nonnull)maskWithImageWithMaskImage:(UIImage * _Nonnull)maskImage SWIFT_WARN_UNUSED_RESULT;
/// Mask the contained image with an ellipse.
/// Allows specifying an additional border to draw on the clipped image.
/// For a circle, ensure the image width and height are equal!
/// \param borderWidth Optional width of the border to apply - default 0
///
/// \param borderColor Optional color of the border - default White
///
///
/// returns:
/// Self, allowing method chaining
- (Toucan * _Nonnull)maskWithEllipseWithBorderWidth:(CGFloat)borderWidth borderColor:(UIColor * _Nonnull)borderColor SWIFT_WARN_UNUSED_RESULT;
/// Mask the contained image with a path (UIBezierPath) that will be scaled to fit the image.
/// \param path UIBezierPath to mask the image
///
///
/// returns:
/// Self, allowing method chaining
- (Toucan * _Nonnull)maskWithPathWithPath:(UIBezierPath * _Nonnull)path SWIFT_WARN_UNUSED_RESULT;
/// Mask the contained image with a path (UIBezierPath) which is provided via a closure.
/// \param path closure that returns a UIBezierPath. Using a closure allows the user to provide the path after knowing the size of the image
///
///
/// returns:
/// Self, allowing method chaining
- (Toucan * _Nonnull)maskWithPathClosureWithPath:(SWIFT_NOESCAPE UIBezierPath * _Nonnull (^ _Nonnull)(CGRect))path SWIFT_WARN_UNUSED_RESULT;
/// Mask the contained image with a rounded rectangle border.
/// Allows specifying an additional border to draw on the clipped image.
/// \param cornerRadius Radius of the rounded rect corners
///
/// \param borderWidth Optional width of border to apply - default 0
///
/// \param borderColor Optional color of the border - default White
///
///
/// returns:
/// Self, allowing method chaining
- (Toucan * _Nonnull)maskWithRoundedRectWithCornerRadius:(CGFloat)cornerRadius borderWidth:(CGFloat)borderWidth borderColor:(UIColor * _Nonnull)borderColor SWIFT_WARN_UNUSED_RESULT;
/// Overlay an image ontop of the current image.
/// \param image Image to be on the bottom layer
///
/// \param overlayImage Image to be on the top layer, i.e. drawn on top of image
///
/// \param overlayFrame Frame of the overlay image
///
///
/// returns:
/// Self, allowing method chaining
- (Toucan * _Nonnull)layerWithOverlayImage:(UIImage * _Nonnull)overlayImage overlayFrame:(CGRect)overlayFrame SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


@interface UIViewController (SWIFT_EXTENSION(Test))
- (void)hideKeyboardWhenTappedAround;
- (void)dismissKeyboard;
@end

@protocol NSObject;
@class UITapGestureRecognizer;

SWIFT_CLASS("_TtC4Test20VC_ACreator_HomePage")
@interface VC_ACreator_HomePage : UIViewController <UIScrollViewDelegate, UITableViewDelegate, UITableViewDataSource>
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified bgImage;
@property (nonatomic, strong) IBOutlet UILabel * _Null_unspecified fldusername;
@property (nonatomic, strong) IBOutlet UILabel * _Null_unspecified fldcompany;
@property (nonatomic, weak) IBOutlet UITableView * _Null_unspecified userTable;
@property (nonatomic, strong) FIRAuthStateDidChangeListenerHandle _Null_unspecified handle;
- (void)deleteUserButtonWithSender:(UITapGestureRecognizer * _Nonnull)sender;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)animated;
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (void)viewWillDisappear:(BOOL)animated;
- (IBAction)logout:(id _Nonnull)sender;
- (IBAction)btn_addUser:(id _Nonnull)sender;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UITextField;

SWIFT_CLASS("_TtC4Test19VC_ACreator_Payment")
@interface VC_ACreator_Payment : UIViewController <UITextFieldDelegate>
@property (nonatomic, strong) IBOutlet UITextField * _Null_unspecified fldcvv;
@property (nonatomic, strong) IBOutlet UITextField * _Null_unspecified fldnum;
@property (nonatomic, strong) IBOutlet UITextField * _Null_unspecified fldname;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC4Test13VC_ClickImage")
@interface VC_ClickImage : UIViewController
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified btn_delete_lvl3;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified btn_approve_lvl2;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified btn_delete_lvl2;
@property (nonatomic, weak) IBOutlet UITextView * _Null_unspecified imgCaption;
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified image;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewDidLoad;
- (void)imageSelectedWithTapGestureRecognizer:(UITapGestureRecognizer * _Nonnull)tapGestureRecognizer;
- (void)performInitialisation;
- (void)viewWillLayoutSubviews;
- (IBAction)deletePost:(id _Nonnull)sender;
- (IBAction)approvePost:(id _Nonnull)sender;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC4Test23VC_Creator_ConfirmPword")
@interface VC_Creator_ConfirmPword : UIViewController <UITextFieldDelegate>
@property (nonatomic, strong) IBOutlet UITextField * _Null_unspecified fld_confirmpword;
@property (nonatomic, strong) IBOutlet UITextField * _Null_unspecified fld_newpword;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class FIRDatabaseReference;

SWIFT_CLASS("_TtC4Test17VC_Creator_Signin")
@interface VC_Creator_Signin : UIViewController <UITextFieldDelegate>
@property (nonatomic, strong) IBOutlet UITextField * _Null_unspecified fld_password;
@property (nonatomic, strong) IBOutlet UITextField * _Null_unspecified fld_username;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified SigninBtn;
@property (nonatomic, copy) NSString * _Null_unspecified userUid;
@property (nonatomic, strong) FIRDatabaseReference * _Nullable ref;
- (void)viewDidLoad;
- (IBAction)BtnTapped:(id _Nonnull)sender;
- (void)completeAsyncCallsWithCompletion:(void (^ _Nonnull)(BOOL))completion;
- (void)getUserInfoWithCompletion:(void (^ _Nonnull)(BOOL))completion;
- (void)getAccountInfoWithCompletion:(void (^ _Nonnull)(BOOL))completion;
- (void)getRoleInfoWithCompletion:(void (^ _Nonnull)(BOOL))completion;
- (void)directSegue;
- (void)viewDidAppear:(BOOL)animated;
- (void)setUser;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UIBarButtonItem;

SWIFT_CLASS("_TtC4Test20VC_Creator_Viewposts")
@interface VC_Creator_Viewposts : UIViewController <UIScrollViewDelegate, UITableViewDelegate, UITableViewDataSource>
@property (nonatomic, strong) IBOutlet UITableView * _Null_unspecified viewposts;
@property (nonatomic, weak) IBOutlet UIBarButtonItem * _Null_unspecified logOut;
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified bgImage;
@property (nonatomic, strong) IBOutlet UILabel * _Null_unspecified fldusername;
@property (nonatomic, strong) IBOutlet UILabel * _Null_unspecified fldcompany;
@property (nonatomic, strong) FIRDatabaseReference * _Null_unspecified dbRef;
@property (nonatomic, strong) FIRAuthStateDidChangeListenerHandle _Null_unspecified handle;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)animated;
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (void)viewWillDisappear:(BOOL)animated;
- (IBAction)logout:(id _Nonnull)sender;
- (void)tableView:(UITableView * _Nonnull)tableView didSelectRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (BOOL)tableView:(UITableView * _Nonnull)tableView canEditRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (void)tableView:(UITableView * _Nonnull)tableView commitEditingStyle:(UITableViewCellEditingStyle)editingStyle forRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC4Test14VC_EditCaption")
@interface VC_EditCaption : UIViewController
@property (nonatomic, weak) IBOutlet UITextView * _Null_unspecified caption;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified buttonUpdate;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (IBAction)btnUpdate:(id _Nonnull)sender;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UIImagePickerController;

SWIFT_CLASS("_TtC4Test14VC_PostContent")
@interface VC_PostContent : UIViewController <UIScrollViewDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, UITextViewDelegate>
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified btn_chooseCategory;
@property (nonatomic, strong) IBOutlet UIImageView * _Null_unspecified fld_camera;
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified fld_cameraRoll;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified fld_cameraRoll_label;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified fld_camera_label;
@property (nonatomic, weak) IBOutlet UITextView * _Null_unspecified fld_caption;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified btn_removeImage;
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified fld_chosenImage;
@property (nonatomic, copy) NSArray<NSString *> * _Nonnull pickerData;
@property (nonatomic, copy) NSString * _Null_unspecified categoryName;
@property (nonatomic, readonly, strong) UIImagePickerController * _Nonnull myPickerController;
@property (nonatomic) NSInteger count;
@property (nonatomic, strong) FIRDatabaseReference * _Nullable ref;
- (void)viewDidLoad;
- (void)viewImage;
- (void)hideCorrespondingElementsWithType:(NSString * _Nonnull)type;
- (void)viewWillAppear:(BOOL)animated;
- (void)textViewDidBeginEditing:(UITextView * _Nonnull)textView;
- (void)textViewDidEndEditing:(UITextView * _Nonnull)textView;
- (void)camera;
- (void)photoLibrary;
- (IBAction)buttonPost:(id _Nonnull)sender;
- (UIImage * _Nonnull)fixOrientationWithImg:(UIImage * _Nonnull)img SWIFT_WARN_UNUSED_RESULT;
- (void)uploadImgWithImg:(UIImage * _Nonnull)img caption:(NSString * _Nonnull)caption;
- (void)imagePickerController:(UIImagePickerController * _Nonnull)picker didFinishPickingMediaWithInfo:(NSDictionary<NSString *, id> * _Nonnull)info;
- (void)didReceiveMemoryWarning;
- (IBAction)buttonSelectImage:(id _Nonnull)sender;
- (IBAction)btn_chooseCategory:(id _Nonnull)sender;
- (IBAction)button_removeImage:(id _Nonnull)sender;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC4Test17VC_SelectCategory")
@interface VC_SelectCategory : UIViewController <UIScrollViewDelegate, UITableViewDelegate, UITableViewDataSource>
@property (nonatomic, copy) NSArray<NSString *> * _Nonnull categories;
@property (nonatomic, weak) IBOutlet UITableView * _Null_unspecified categoryTable;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified categoryLabel;
- (void)viewDidLoad;
- (IBAction)btn_back:(id _Nonnull)sender;
- (void)didReceiveMemoryWarning;
- (NSInteger)numberOfSectionsInTableView:(UITableView * _Nonnull)tableView SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (void)tableView:(UITableView * _Nonnull)tableView didSelectRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (IBAction)btn_cancel:(id _Nonnull)sender;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC4Test10VC_adduser")
@interface VC_adduser : UIViewController
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (IBAction)btn_cancel:(id _Nonnull)sender;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UIPickerView;
@class UIView;

SWIFT_CLASS("_TtC4Test9VC_picker")
@interface VC_picker : UIViewController <UIPickerViewDataSource, UIPickerViewDelegate>
@property (nonatomic, weak) IBOutlet UIPickerView * _Null_unspecified pickerView;
@property (nonatomic, copy) NSArray<NSString *> * _Nonnull pickerData;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (NSInteger)numberOfComponentsInPickerView:(UIPickerView * _Nonnull)pickerView SWIFT_WARN_UNUSED_RESULT;
- (NSInteger)pickerView:(UIPickerView * _Nonnull)pickerView numberOfRowsInComponent:(NSInteger)component SWIFT_WARN_UNUSED_RESULT;
- (NSString * _Nullable)pickerView:(UIPickerView * _Nonnull)pickerView titleForRow:(NSInteger)row forComponent:(NSInteger)component SWIFT_WARN_UNUSED_RESULT;
- (UIView * _Nonnull)pickerView:(UIPickerView * _Nonnull)pickerView viewForRow:(NSInteger)row forComponent:(NSInteger)component reusingView:(UIView * _Nullable)view SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC4Test16VC_selectedimage")
@interface VC_selectedimage : UIViewController
@property (nonatomic, copy) NSString * _Null_unspecified imgUrl;
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified imageView;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified btnExit;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (void)didReceiveMemoryWarning;
- (IBAction)btnExit:(id _Nonnull)sender;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

@class UIStackView;
@class UISegmentedControl;

SWIFT_CLASS("_TtC4Test14ViewController")
@interface ViewController : UIViewController
@property (nonatomic, weak) IBOutlet UIStackView * _Null_unspecified signinSelector;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified signinLabel;
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified emailTextField;
@property (nonatomic, weak) IBOutlet UITextField * _Null_unspecified passwordTextField;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified loginButton;
@property (nonatomic) BOOL isLogin;
- (void)viewDidLoad;
- (void)didReceiveMemoryWarning;
- (IBAction)loginSelectorChanged:(UISegmentedControl * _Nonnull)sender;
- (IBAction)loginButtonTapped:(UIButton * _Nonnull)sender;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)aDecoder OBJC_DESIGNATED_INITIALIZER;
@end

#pragma clang diagnostic pop
