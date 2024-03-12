#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StackComponentHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StackComponentHelper"));
	}


	template <typename T = bool> static T IsEmtpyStack(uintptr_t stackEntity) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x14890C0))(0, stackEntity);
	}
	template <typename T = bool> static T ReplaceStackIfNeed(uintptr_t stackEntity, Il2CppString* newResource, int32_t newCount, void* newSignature) {
		return ((T (*)(void *, uintptr_t, Il2CppString*, int32_t, void*))(Il2CppBase() + 0x1489200))(0, stackEntity, newResource, newCount, newSignature);
	}

};

}
