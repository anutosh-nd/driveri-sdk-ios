//[Netradyne Driveri SDK](../../index.md)/[com.netradyne.driverisdk.user](../index.md)/[NDUserAPI](index.md)/[getUser](get-user.md)



# getUser  
[common]  
Content  
fun [getUser](get-user.md)(callback: (error: [NDError](../../com.netradyne.driverisdk/-n-d-error/index.md)?, user: [NDUser](../-n-d-user/index.md)?) -> [Unit](https://kotlinlang.org/api/latest/jvm/stdlib/kotlin/-unit/index.html))  
More info  


Initialize authenticated user to get an instance of [NDUser](../-n-d-user/index.md).



Application must call this on every app launch to fetch latest user settings from ND Cloud. Failing to do so will result in [USER_NOT_INITIALIZED](../../com.netradyne.driverisdk/-u-s-e-r_-n-o-t_-i-n-i-t-i-a-l-i-z-e-d.md) error.



## Parameters  
  
common  
  
|  Name|  Summary| 
|---|---|
| <a name="com.netradyne.driverisdk.user/NDUserAPI/getUser/#kotlin.Function2[com.netradyne.driverisdk.NDError?,com.netradyne.driverisdk.user.NDUser?,kotlin.Unit]/PointingToDeclaration/"></a>callback| <a name="com.netradyne.driverisdk.user/NDUserAPI/getUser/#kotlin.Function2[com.netradyne.driverisdk.NDError?,com.netradyne.driverisdk.user.NDUser?,kotlin.Unit]/PointingToDeclaration/"></a>
  
  



