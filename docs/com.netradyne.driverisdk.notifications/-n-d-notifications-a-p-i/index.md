//[Netradyne Driveri SDK](../../index.md)/[com.netradyne.driverisdk.notifications](../index.md)/[NDNotificationsAPI](index.md)



# NDNotificationsAPI  
 [common] class [NDNotificationsAPI](index.md) : NDApi

Core interface for managing notifications sent from Netradyne Cloud.



We use Firebase Cloud Messaging on both Android and iOS platforms.

   


## Types  
  
|  Name|  Summary| 
|---|---|
| <a name="com.netradyne.driverisdk.notifications/NDNotificationsAPI.Companion///PointingToDeclaration/"></a>[Companion](-companion/index.md)| <a name="com.netradyne.driverisdk.notifications/NDNotificationsAPI.Companion///PointingToDeclaration/"></a>[common]  <br>Content  <br>object [Companion](-companion/index.md)  <br><br><br>


## Functions  
  
|  Name|  Summary| 
|---|---|
| <a name="com.netradyne.driverisdk.notifications/NDNotificationsAPI/cancel/#/PointingToDeclaration/"></a>[cancel](cancel.md)| <a name="com.netradyne.driverisdk.notifications/NDNotificationsAPI/cancel/#/PointingToDeclaration/"></a>[common]  <br>Content  <br>open override fun [cancel](cancel.md)()  <br><br><br>
| <a name="kotlin/Any/equals/#kotlin.Any?/PointingToDeclaration/"></a>[equals](../../com.netradyne.driverisdk.video/-n-d-video-a-p-i/index.md#%5Bkotlin%2FAny%2Fequals%2F%23kotlin.Any%3F%2FPointingToDeclaration%2F%5D%2FFunctions%2F106651406)| <a name="kotlin/Any/equals/#kotlin.Any?/PointingToDeclaration/"></a>[common]  <br>Content  <br>open operator fun [equals](../../com.netradyne.driverisdk.video/-n-d-video-a-p-i/index.md#%5Bkotlin%2FAny%2Fequals%2F%23kotlin.Any%3F%2FPointingToDeclaration%2F%5D%2FFunctions%2F106651406)(other: [Any](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin/-any/index.html)?): [Boolean](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin/-boolean/index.html)  <br><br><br>
| <a name="com.netradyne.driverisdk.notifications/NDNotificationsAPI/getNotification/#kotlin.collections.Map[kotlin.String,kotlin.String]/PointingToDeclaration/"></a>[getNotification](get-notification.md)| <a name="com.netradyne.driverisdk.notifications/NDNotificationsAPI/getNotification/#kotlin.collections.Map[kotlin.String,kotlin.String]/PointingToDeclaration/"></a>[common]  <br>Content  <br>fun [getNotification](get-notification.md)(data: [Map](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin.collections/-map/index.html)<[String](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin/-string/index.html), [String](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin/-string/index.html)>): [NDNotification](../-n-d-notification/index.md)?  <br>More info  <br>Get [NDNotification](../-n-d-notification/index.md) from remote notification data  <br><br><br>
| <a name="com.netradyne.driverisdk.notifications/NDNotificationsAPI/getNotifications/#kotlin.Boolean#kotlin.Boolean#kotlin.Function2[com.netradyne.driverisdk.NDError?,com.netradyne.driverisdk.notifications.NDNotifications?,kotlin.Nothing]/PointingToDeclaration/"></a>[getNotifications](get-notifications.md)| <a name="com.netradyne.driverisdk.notifications/NDNotificationsAPI/getNotifications/#kotlin.Boolean#kotlin.Boolean#kotlin.Function2[com.netradyne.driverisdk.NDError?,com.netradyne.driverisdk.notifications.NDNotifications?,kotlin.Nothing]/PointingToDeclaration/"></a>[common]  <br>Content  <br>fun [getNotifications](get-notifications.md)(loadMore: [Boolean](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin/-boolean/index.html), fetchOnlyUnread: [Boolean](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin/-boolean/index.html), callback: ([NDError](../../com.netradyne.driverisdk/-n-d-error/index.md)?, [NDNotifications](../-n-d-notifications/index.md)?) -> [Nothing](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin/-nothing/index.html))  <br>More info  <br>Get notification messages from Netradyne Cloud  <br><br><br>
| <a name="kotlin/Any/hashCode/#/PointingToDeclaration/"></a>[hashCode](../../com.netradyne.driverisdk.video/-n-d-video-a-p-i/index.md#%5Bkotlin%2FAny%2FhashCode%2F%23%2FPointingToDeclaration%2F%5D%2FFunctions%2F106651406)| <a name="kotlin/Any/hashCode/#/PointingToDeclaration/"></a>[common]  <br>Content  <br>open fun [hashCode](../../com.netradyne.driverisdk.video/-n-d-video-a-p-i/index.md#%5Bkotlin%2FAny%2FhashCode%2F%23%2FPointingToDeclaration%2F%5D%2FFunctions%2F106651406)(): [Int](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin/-int/index.html)  <br><br><br>
| <a name="com.netradyne.driverisdk.notifications/NDNotificationsAPI/initNotifications/#kotlin.Function2[com.netradyne.driverisdk.NDError?,kotlin.Boolean,kotlin.Unit]/PointingToDeclaration/"></a>[initNotifications](init-notifications.md)| <a name="com.netradyne.driverisdk.notifications/NDNotificationsAPI/initNotifications/#kotlin.Function2[com.netradyne.driverisdk.NDError?,kotlin.Boolean,kotlin.Unit]/PointingToDeclaration/"></a>[common]  <br>Content  <br>fun [initNotifications](init-notifications.md)(callback: ([NDError](../../com.netradyne.driverisdk/-n-d-error/index.md)?, [Boolean](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin/-boolean/index.html)) -> [Unit](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin/-unit/index.html))  <br>More info  <br>Initialize NotificationsThis method initializes Firebase Cloud Messaging and uploads FCM token to ND Cloud.  <br><br><br>
| <a name="com.netradyne.driverisdk.notifications/NDNotificationsAPI/isNDNotification/#kotlin.collections.Map[kotlin.String,kotlin.String]/PointingToDeclaration/"></a>[isNDNotification](is-n-d-notification.md)| <a name="com.netradyne.driverisdk.notifications/NDNotificationsAPI/isNDNotification/#kotlin.collections.Map[kotlin.String,kotlin.String]/PointingToDeclaration/"></a>[common]  <br>Content  <br>fun [isNDNotification](is-n-d-notification.md)(data: [Map](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin.collections/-map/index.html)<[String](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin/-string/index.html), [String](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin/-string/index.html)>): [Boolean](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin/-boolean/index.html)  <br>More info  <br>Check whether remote notification data is sent from ND Cloud  <br><br><br>
| <a name="kotlin/Any/toString/#/PointingToDeclaration/"></a>[toString](../../com.netradyne.driverisdk.video/-n-d-video-a-p-i/index.md#%5Bkotlin%2FAny%2FtoString%2F%23%2FPointingToDeclaration%2F%5D%2FFunctions%2F106651406)| <a name="kotlin/Any/toString/#/PointingToDeclaration/"></a>[common]  <br>Content  <br>open fun [toString](../../com.netradyne.driverisdk.video/-n-d-video-a-p-i/index.md#%5Bkotlin%2FAny%2FtoString%2F%23%2FPointingToDeclaration%2F%5D%2FFunctions%2F106651406)(): [String](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin/-string/index.html)  <br><br><br>

