//[Netradyne Driveri SDK](../../index.md)/[com.netradyne.driverisdk](../index.md)/[DriveriSDK](index.md)/[getEventsAPI](get-events-a-p-i.md)



# getEventsAPI  
[common]  
Content  
fun [getEventsAPI](get-events-a-p-i.md)(): [Either](../-either/index.md)<[NDError](../-n-d-error/index.md), [NDEventsAPI](../../com.netradyne.driverisdk.events/-n-d-events-a-p-i/index.md)>  
More info  


Get an instance of [NDEventsAPI](../../com.netradyne.driverisdk.events/-n-d-events-a-p-i/index.md). This method returns an [Either](../-either/index.md) type which can contain either an instance of [NDError](../-n-d-error/index.md) or [NDEventsAPI](../../com.netradyne.driverisdk.events/-n-d-events-a-p-i/index.md). Use [Either.isLeft](../-either/is-left.md) and [Either.getLeft](../-either/get-left.md) or [Either.isRight](../-either/is-right.md) and [Either.getRight](../-either/get-right.md) to obtain the encapsulated instance.

  



