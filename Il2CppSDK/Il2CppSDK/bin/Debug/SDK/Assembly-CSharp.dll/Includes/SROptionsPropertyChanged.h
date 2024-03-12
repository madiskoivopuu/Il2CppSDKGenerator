#pragma once
#include <Il2Cpp/Il2Cpp.h>

class SROptionsPropertyChanged
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "SROptionsPropertyChanged"));
	}


	template <typename T = void> T Invoke(uintptr_t sender, Il2CppString* propertyName) {
		return ((T (*)(SROptionsPropertyChanged*, uintptr_t, Il2CppString*))(Il2CppBase() + 0x1354EB4))(this, sender, propertyName);
	}
	template <typename T = uintptr_t> T BeginInvoke(uintptr_t sender, Il2CppString* propertyName, uintptr_t callback, uintptr_t object) {
		return ((T (*)(SROptionsPropertyChanged*, uintptr_t, Il2CppString*, uintptr_t, uintptr_t))(Il2CppBase() + 0x1355468))(this, sender, propertyName, callback, object);
	}
	template <typename T = void> T EndInvoke(uintptr_t result) {
		return ((T (*)(SROptionsPropertyChanged*, uintptr_t))(Il2CppBase() + 0x1355498))(this, result);
	}

};

}
