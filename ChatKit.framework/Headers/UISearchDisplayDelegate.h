/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */




@protocol UISearchDisplayDelegate <NSObject>
@optional
- (void)searchDisplayControllerWillBeginSearch:(id)searchDisplayController;
- (void)searchDisplayControllerDidBeginSearch:(id)searchDisplayController;
- (void)searchDisplayControllerWillEndSearch:(id)searchDisplayController;
- (void)searchDisplayControllerDidEndSearch:(id)searchDisplayController;
- (void)searchDisplayController:(id)controller didLoadSearchResultsTableView:(id)view;
- (void)searchDisplayController:(id)controller willUnloadSearchResultsTableView:(id)view;
- (void)searchDisplayController:(id)controller willShowSearchResultsTableView:(id)view;
- (void)searchDisplayController:(id)controller didShowSearchResultsTableView:(id)view;
- (void)searchDisplayController:(id)controller willHideSearchResultsTableView:(id)view;
- (void)searchDisplayController:(id)controller didHideSearchResultsTableView:(id)view;
- (BOOL)searchDisplayController:(id)controller shouldReloadTableForSearchString:(id)searchString;
- (BOOL)searchDisplayController:(id)controller shouldReloadTableForSearchScope:(int)searchScope;
@end
