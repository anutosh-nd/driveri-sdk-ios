//[Netradyne Driveri SDK](../../index.md)/[com.netradyne.driverisdk.notifications](../index.md)/[NDNotificationsAPI](index.md)/[getNotifications](get-notifications.md)



# getNotifications  
[common]  
Content  
fun [getNotifications](get-notifications.md)(loadMore: [Boolean](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin/-boolean/index.html), fetchOnlyUnread: [Boolean](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin/-boolean/index.html), callback: ([NDError](../../com.netradyne.driverisdk/-n-d-error/index.md)?, [NDNotifications](../-n-d-notifications/index.md)?) -> [Nothing](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin/-nothing/index.html))  
More info  


Get notification messages from Netradyne Cloud



## Parameters  
  
common  
  
|  Name|  Summary| 
|---|---|
| <a name="com.netradyne.driverisdk.notifications/NDNotificationsAPI/getNotifications/#kotlin.Boolean#kotlin.Boolean#kotlin.Function2[com.netradyne.driverisdk.NDError?,com.netradyne.driverisdk.notifications.NDNotifications?,kotlin.Nothing]/PointingToDeclaration/"></a>loadMore| <a name="com.netradyne.driverisdk.notifications/NDNotificationsAPI/getNotifications/#kotlin.Boolean#kotlin.Boolean#kotlin.Function2[com.netradyne.driverisdk.NDError?,com.netradyne.driverisdk.notifications.NDNotifications?,kotlin.Nothing]/PointingToDeclaration/"></a><br><br>Set this to true if [hasMoreNotifications](../-n-d-notifications/has-more-notifications.md) was true in previous result obtained from this method, false otherwise.<br><br>
| <a name="com.netradyne.driverisdk.notifications/NDNotificationsAPI/getNotifications/#kotlin.Boolean#kotlin.Boolean#kotlin.Function2[com.netradyne.driverisdk.NDError?,com.netradyne.driverisdk.notifications.NDNotifications?,kotlin.Nothing]/PointingToDeclaration/"></a>fetchOnlyUnread| <a name="com.netradyne.driverisdk.notifications/NDNotificationsAPI/getNotifications/#kotlin.Boolean#kotlin.Boolean#kotlin.Function2[com.netradyne.driverisdk.NDError?,com.netradyne.driverisdk.notifications.NDNotifications?,kotlin.Nothing]/PointingToDeclaration/"></a><br><br>Set to true for fetching only unread notification messages<br><br>
| <a name="com.netradyne.driverisdk.notifications/NDNotificationsAPI/getNotifications/#kotlin.Boolean#kotlin.Boolean#kotlin.Function2[com.netradyne.driverisdk.NDError?,com.netradyne.driverisdk.notifications.NDNotifications?,kotlin.Nothing]/PointingToDeclaration/"></a>callback| <a name="com.netradyne.driverisdk.notifications/NDNotificationsAPI/getNotifications/#kotlin.Boolean#kotlin.Boolean#kotlin.Function2[com.netradyne.driverisdk.NDError?,com.netradyne.driverisdk.notifications.NDNotifications?,kotlin.Nothing]/PointingToDeclaration/"></a>
  
  



