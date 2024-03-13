#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GooglePayload
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GooglePayload"));
	}

	template <typename T = Il2CppString*> T& json() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& packageName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& productId() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int64_t> T& purchaseTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> T& purchaseState() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& developerPayload() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& purchaseToken() {
		return *(T*)((uintptr_t)this + 0x40);
	}


};

