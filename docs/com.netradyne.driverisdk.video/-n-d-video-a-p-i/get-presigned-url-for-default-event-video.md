//[Netradyne Driveri SDK](../../index.md)/[com.netradyne.driverisdk.video](../index.md)/[NDVideoAPI](index.md)/[getPresignedUrlForDefaultEventVideo](get-presigned-url-for-default-event-video.md)



# getPresignedUrlForDefaultEventVideo  
[common]  
Content  
fun [getPresignedUrlForDefaultEventVideo](get-presigned-url-for-default-event-video.md)(event: [NDEvent](../../com.netradyne.driverisdk.events/-n-d-event/index.md), callback: ([NDError](../../com.netradyne.driverisdk/-n-d-error/index.md)?, [String](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin/-string/index.html)?) -> [Unit](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin/-unit/index.html))  
More info  


Get presigned url for event's default video. This url can be used to play the event video on a video player and has an expiry of 10 minutes.



## Parameters  
  
common  
  
|  Name|  Summary| 
|---|---|
| <a name="com.netradyne.driverisdk.video/NDVideoAPI/getPresignedUrlForDefaultEventVideo/#com.netradyne.driverisdk.events.NDEvent#kotlin.Function2[com.netradyne.driverisdk.NDError?,kotlin.String?,kotlin.Unit]/PointingToDeclaration/"></a>event| <a name="com.netradyne.driverisdk.video/NDVideoAPI/getPresignedUrlForDefaultEventVideo/#com.netradyne.driverisdk.events.NDEvent#kotlin.Function2[com.netradyne.driverisdk.NDError?,kotlin.String?,kotlin.Unit]/PointingToDeclaration/"></a>
| <a name="com.netradyne.driverisdk.video/NDVideoAPI/getPresignedUrlForDefaultEventVideo/#com.netradyne.driverisdk.events.NDEvent#kotlin.Function2[com.netradyne.driverisdk.NDError?,kotlin.String?,kotlin.Unit]/PointingToDeclaration/"></a>callback| <a name="com.netradyne.driverisdk.video/NDVideoAPI/getPresignedUrlForDefaultEventVideo/#com.netradyne.driverisdk.events.NDEvent#kotlin.Function2[com.netradyne.driverisdk.NDError?,kotlin.String?,kotlin.Unit]/PointingToDeclaration/"></a><br><br>If the event is detected from road-facing camera then the road-facing (outward) video becomes the default video. Similarly, if the event is detected from driver-facing camera then the driver-facing (inward) video becomes the default video.<br><br>
  
  



