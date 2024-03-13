#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ApplyResourcesToInventoryComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ApplyResourcesToInventoryComponent"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Values() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& RandomGroup() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = bool> T& ShowNotification() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = bool> T& LogResult() {
		return *(T*)((uintptr_t)this + 0x21);
	}
	template <typename T = Il2CppString*> T& ButtonText() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(ApplyResourcesToInventoryComponent*, Il2CppObject*))(Il2CppBase() + 0x18952E8))(this, target);
	}

};

