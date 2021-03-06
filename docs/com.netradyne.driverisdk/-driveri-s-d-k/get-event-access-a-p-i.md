//[Netradyne Driveri SDK](../../index.md)/[com.netradyne.driverisdk](../index.md)/[DriveriSDK](index.md)/[getEventAccessAPI](get-event-access-a-p-i.md)



# getEventAccessAPI  
[common]  
Content  
fun [getEventAccessAPI](get-event-access-a-p-i.md)(): [Either](../-either/index.md)<[NDError](../-n-d-error/index.md), [NDEventAccessAPI](../../com.netradyne.driverisdk.eventAccess/-n-d-event-access-a-p-i/index.md)>  
More info  


Get an instance of [NDEventAccessAPI](../../com.netradyne.driverisdk.eventAccess/-n-d-event-access-a-p-i/index.md). This method returns an [Either](../-either/index.md) type which can contain either an instance of [NDError](../-n-d-error/index.md) or [NDEventAccessAPI](../../com.netradyne.driverisdk.eventAccess/-n-d-event-access-a-p-i/index.md). Use [Either.isLeft](../-either/is-left.md) and [Either.getLeft](../-either/get-left.md) or [Either.isRight](../-either/is-right.md) and [Either.getRight](../-either/get-right.md) to obtain the encapsulated instance.

  



