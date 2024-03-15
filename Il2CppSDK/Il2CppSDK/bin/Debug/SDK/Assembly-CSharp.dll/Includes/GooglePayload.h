#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GooglePayload
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GooglePayload"));
	}

	template <typename R = Il2CppString*> R& json() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& packageName() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& productId() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int64_t> R& purchaseTime() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> R& purchaseState() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = Il2CppString*> R& developerPayload() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = Il2CppString*> R& purchaseToken() {
		return *(R*)((uintptr_t)this + 0x40);
	}


};

