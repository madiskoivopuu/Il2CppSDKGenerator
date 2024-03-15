#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ExtractWorkComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ExtractWorkComponent"));
	}

	template <typename R = int64_t> R& StartTime() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& RewardCount() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> R& ResourceCount() {
		return *(R*)((uintptr_t)this + 0x1C);
	}
	template <typename R = float> R& RobbedResult() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int64_t> R& RobbedTime() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int64_t> R& RobberId() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(ExtractWorkComponent*, Il2CppObject*))(Il2CppBase() + 0x168B100))(this, targetObject);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(ExtractWorkComponent*, uintptr_t))(Il2CppBase() + 0x168B1BC))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(ExtractWorkComponent*, uintptr_t))(Il2CppBase() + 0x168B308))(this, writer);
	}
	template <typename R = bool> R IsDone(ICommonContexts* world, ExtractComponent* extractComponent) {
		return ((R (*)(ExtractWorkComponent*, ICommonContexts*, ExtractComponent*))(Il2CppBase() + 0x168B38C))(this, world, extractComponent);
	}
	template <typename R = float> R GetProgress(int64_t now, ExtractComponent* extractComponent) {
		return ((R (*)(ExtractWorkComponent*, int64_t, ExtractComponent*))(Il2CppBase() + 0x168B518))(this, now, extractComponent);
	}
	template <typename R = bool> R CanSteal(ICommonContexts* world, ExtractComponent* extractComponent, int64_t playerId) {
		return ((R (*)(ExtractWorkComponent*, ICommonContexts*, ExtractComponent*, int64_t))(Il2CppBase() + 0x168B560))(this, world, extractComponent, playerId);
	}
	template <typename R = bool> R WasRobbed() {
		return ((R (*)(ExtractWorkComponent*))(Il2CppBase() + 0x168B6D8))(this);
	}
	template <typename R = int32_t> R LeftResultResources() {
		return ((R (*)(ExtractWorkComponent*))(Il2CppBase() + 0x168B6E8))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ExtractWorkComponent*))(Il2CppBase() + 0x168B778))(this);
	}

};

