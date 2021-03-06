//[Netradyne Driveri SDK](../../index.md)/[com.netradyne.driverisdk](../index.md)/[DriveriSDK](index.md)/[getVideoAPI](get-video-a-p-i.md)



# getVideoAPI  
[common]  
Content  
fun [getVideoAPI](get-video-a-p-i.md)(): [Either](../-either/index.md)<[NDError](../-n-d-error/index.md), [NDVideoAPI](../../com.netradyne.driverisdk.video/-n-d-video-a-p-i/index.md)>  
More info  


Get an instance of [NDVideoAPI](../../com.netradyne.driverisdk.video/-n-d-video-a-p-i/index.md). This method returns an [Either](../-either/index.md) type which can contain either an instance of [NDError](../-n-d-error/index.md) or [NDVideoAPI](../../com.netradyne.driverisdk.video/-n-d-video-a-p-i/index.md). Use [Either.isLeft](../-either/is-left.md) and [Either.getLeft](../-either/get-left.md) or [Either.isRight](../-either/is-right.md) and [Either.getRight](../-either/get-right.md) to obtain the encapsulated instance.

  



