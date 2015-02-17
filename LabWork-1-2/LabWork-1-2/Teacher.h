#import "Worker.h"
#import "HeadOfTheChair.h"
#import "ParticipantOfEducationalProcess.h"
#import "Student.h"

@interface Teacher : Worker <ParticipantOfEducationalProcess>

@property (strong, nonatomic, readonly) NSSet *students;
@property (weak, nonatomic, readonly) HeadOfTheChair *superior;

@end