#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PushNotificationsEnabledComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PushNotificationsEnabledComponent"));
	}


	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(PushNotificationsEnabledComponent*, Il2CppObject*))(Il2CppBase() + 0x11BB974))(this, target);
	}

};

