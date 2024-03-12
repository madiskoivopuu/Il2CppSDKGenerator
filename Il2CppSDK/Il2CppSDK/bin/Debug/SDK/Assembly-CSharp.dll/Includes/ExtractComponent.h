#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ExtractComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ExtractComponent"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& Grades() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Duration() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = float> T& Rate() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& FullSlotBonus() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = float> T& StealRate() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = bool> T& AllowStealResources() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& RequiredResource() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& RewardResource() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppString*> T& StealResource() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = Il2CppString*> T& InfoText() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& ConfirmNotFullLoadText() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(ExtractComponent*, uintptr_t))(Il2CppBase() + 0x168AA38))(this, targetObject);
	}
	template <typename T = int32_t> T GetCurrentSlotCount(uintptr_t entity) {
		return ((T (*)(ExtractComponent*, uintptr_t))(Il2CppBase() + 0x168AB48))(this, entity);
	}
	template <typename T = int32_t> T GetMaxSlotCount() {
		return ((T (*)(ExtractComponent*))(Il2CppBase() + 0x168AC28))(this);
	}

};

}
