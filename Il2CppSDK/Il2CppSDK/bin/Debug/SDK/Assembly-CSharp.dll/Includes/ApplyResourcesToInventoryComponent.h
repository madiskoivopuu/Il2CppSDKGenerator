#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplyResourcesToInventoryComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyResourcesToInventoryComponent"));
	}

	template <typename R = Il2CppArray<Resource>*> R& Values() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& RandomGroup() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = bool> R& ShowNotification() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = bool> R& LogResult() {
		return *(R*)((uintptr_t)this + 0x21);
	}
	template <typename R = Il2CppString*> R& ButtonText() {
		return *(R*)((uintptr_t)this + 0x28);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(ApplyResourcesToInventoryComponent*, Il2CppObject*))(Il2CppBase() + 0x18952E8))(this, target);
	}

};

