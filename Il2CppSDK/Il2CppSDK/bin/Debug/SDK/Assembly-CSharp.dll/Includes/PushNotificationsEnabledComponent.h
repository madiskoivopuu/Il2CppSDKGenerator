#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PushNotificationsEnabledComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PushNotificationsEnabledComponent"));
	}


	template <typename T = void> T CopyTo(uintptr_t target) {
		return ((T (*)(PushNotificationsEnabledComponent*, uintptr_t))(Il2CppBase() + 0x11BB974))(this, target);
	}

};

}
