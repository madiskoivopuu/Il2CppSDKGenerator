#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "Context1.h" 
#include "NotificationEntity.h" 

class NotificationContext : public Context1<NotificationEntity*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NotificationContext"));
	}



};
