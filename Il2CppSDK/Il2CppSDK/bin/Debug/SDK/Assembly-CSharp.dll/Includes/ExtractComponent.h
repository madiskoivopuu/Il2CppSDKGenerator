#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ExtractComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ExtractComponent"));
	}

	template <typename R = Il2CppArray<Grade*>*> R& Grades() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& Duration() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = float> R& Rate() {
		return *(R*)((uintptr_t)this + 0x1C);
	}
	template <typename R = float> R& FullSlotBonus() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = float> R& StealRate() {
		return *(R*)((uintptr_t)this + 0x24);
	}
	template <typename R = bool> R& AllowStealResources() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppString*> R& RequiredResource() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = Il2CppString*> R& RewardResource() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = Il2CppString*> R& StealResource() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = Il2CppString*> R& InfoText() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = Il2CppString*> R& ConfirmNotFullLoadText() {
		return *(R*)((uintptr_t)this + 0x50);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(ExtractComponent*, Il2CppObject*))(Il2CppBase() + 0x168AA38))(this, targetObject);
	}
	template <typename R = int32_t> R GetCurrentSlotCount(GameEntity* entity) {
		return ((R (*)(ExtractComponent*, GameEntity*))(Il2CppBase() + 0x168AB48))(this, entity);
	}
	template <typename R = int32_t> R GetMaxSlotCount() {
		return ((R (*)(ExtractComponent*))(Il2CppBase() + 0x168AC28))(this);
	}

};

