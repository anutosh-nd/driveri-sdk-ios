//[Netradyne Driveri SDK](../../index.md)/[com.netradyne.driverisdk.appBeacon](../index.md)/[NDAppBeaconAPI](index.md)



# NDAppBeaconAPI  
 [common] class [NDAppBeaconAPI](index.md) : NDApi

Core interface for managing driver login with Driveri using mobile phone as BLE beacon.



DriveriSDK will set up AppBeacon feature only if it is enabled for a tenant in IDMS. App can call [disableAppBeaconLogin](disable-app-beacon-login.md) to disable driver login using BLE even if it is enabled for the tenant in IDMS.



DriveriSDK provides logged in driver id to Driveri device as part of App beacon-based driver login feature. SDK uploads this driver id to Cloud which in turn assigns events generated on the device to this driver id. In case there are multiple drivers in a vehicle, Driveri device will get multiple driver ids and Netradyne Cloud will be unable to identify the actual driver from among a team of drivers. In this case, App can ask drivers to confirm if they have started driving or have stopped driving or they are not driving at this moment. [NDAppBeaconAPI](index.md) has [startDriving](start-driving.md), [stopDriving](stop-driving.md) and [markAsNotDriving](mark-as-not-driving.md) methods for these cases.

   


## Functions  
  
|  Name|  Summary| 
|---|---|
| <a name="com.netradyne.driverisdk.appBeacon/NDAppBeaconAPI/cancel/#/PointingToDeclaration/"></a>[cancel](cancel.md)| <a name="com.netradyne.driverisdk.appBeacon/NDAppBeaconAPI/cancel/#/PointingToDeclaration/"></a>[common]  <br>Content  <br>open override fun [cancel](cancel.md)()  <br><br><br>
| <a name="com.netradyne.driverisdk.appBeacon/NDAppBeaconAPI/disableAppBeaconLogin/#/PointingToDeclaration/"></a>[disableAppBeaconLogin](disable-app-beacon-login.md)| <a name="com.netradyne.driverisdk.appBeacon/NDAppBeaconAPI/disableAppBeaconLogin/#/PointingToDeclaration/"></a>[common]  <br>Content  <br>fun [disableAppBeaconLogin](disable-app-beacon-login.md)()  <br><br><br>
| <a name="kotlin/Any/equals/#kotlin.Any?/PointingToDeclaration/"></a>[equals](../../com.netradyne.driverisdk.video/-n-d-video-a-p-i/index.md#%5Bkotlin%2FAny%2Fequals%2F%23kotlin.Any%3F%2FPointingToDeclaration%2F%5D%2FFunctions%2F106651406)| <a name="kotlin/Any/equals/#kotlin.Any?/PointingToDeclaration/"></a>[common]  <br>Content  <br>open operator fun [equals](../../com.netradyne.driverisdk.video/-n-d-video-a-p-i/index.md#%5Bkotlin%2FAny%2Fequals%2F%23kotlin.Any%3F%2FPointingToDeclaration%2F%5D%2FFunctions%2F106651406)(other: [Any](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin/-any/index.html)?): [Boolean](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin/-boolean/index.html)  <br><br><br>
| <a name="kotlin/Any/hashCode/#/PointingToDeclaration/"></a>[hashCode](../../com.netradyne.driverisdk.video/-n-d-video-a-p-i/index.md#%5Bkotlin%2FAny%2FhashCode%2F%23%2FPointingToDeclaration%2F%5D%2FFunctions%2F106651406)| <a name="kotlin/Any/hashCode/#/PointingToDeclaration/"></a>[common]  <br>Content  <br>open fun [hashCode](../../com.netradyne.driverisdk.video/-n-d-video-a-p-i/index.md#%5Bkotlin%2FAny%2FhashCode%2F%23%2FPointingToDeclaration%2F%5D%2FFunctions%2F106651406)(): [Int](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin/-int/index.html)  <br><br><br>
| <a name="com.netradyne.driverisdk.appBeacon/NDAppBeaconAPI/markAsNotDriving/#/PointingToDeclaration/"></a>[markAsNotDriving](mark-as-not-driving.md)| <a name="com.netradyne.driverisdk.appBeacon/NDAppBeaconAPI/markAsNotDriving/#/PointingToDeclaration/"></a>[common]  <br>Content  <br>fun [markAsNotDriving](mark-as-not-driving.md)()  <br><br><br>
| <a name="com.netradyne.driverisdk.appBeacon/NDAppBeaconAPI/startDriving/#/PointingToDeclaration/"></a>[startDriving](start-driving.md)| <a name="com.netradyne.driverisdk.appBeacon/NDAppBeaconAPI/startDriving/#/PointingToDeclaration/"></a>[common]  <br>Content  <br>fun [startDriving](start-driving.md)()  <br><br><br>
| <a name="com.netradyne.driverisdk.appBeacon/NDAppBeaconAPI/stopDriving/#/PointingToDeclaration/"></a>[stopDriving](stop-driving.md)| <a name="com.netradyne.driverisdk.appBeacon/NDAppBeaconAPI/stopDriving/#/PointingToDeclaration/"></a>[common]  <br>Content  <br>fun [stopDriving](stop-driving.md)()  <br><br><br>
| <a name="kotlin/Any/toString/#/PointingToDeclaration/"></a>[toString](../../com.netradyne.driverisdk.video/-n-d-video-a-p-i/index.md#%5Bkotlin%2FAny%2FtoString%2F%23%2FPointingToDeclaration%2F%5D%2FFunctions%2F106651406)| <a name="kotlin/Any/toString/#/PointingToDeclaration/"></a>[common]  <br>Content  <br>open fun [toString](../../com.netradyne.driverisdk.video/-n-d-video-a-p-i/index.md#%5Bkotlin%2FAny%2FtoString%2F%23%2FPointingToDeclaration%2F%5D%2FFunctions%2F106651406)(): [String](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin/-string/index.html)  <br><br><br>

