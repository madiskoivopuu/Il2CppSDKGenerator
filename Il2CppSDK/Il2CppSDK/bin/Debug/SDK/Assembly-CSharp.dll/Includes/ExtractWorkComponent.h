#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ExtractWorkComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ExtractWorkComponent"));
	}

	template <typename T = int64_t> T& StartTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& RewardCount() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& ResourceCount() {
		return *(T*)((uintptr_t)this + 0x1C);
	}
	template <typename T = float> T& RobbedResult() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int64_t> T& RobbedTime() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int64_t> T& RobberId() {
		return *(T*)((uintptr_t)this + 0x30);
	}

	template <typename T = void> T CopyTo(uintptr_t targetObject) {
		return ((T (*)(ExtractWorkComponent*, uintptr_t))(Il2CppBase() + 0x168B100))(this, targetObject);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(ExtractWorkComponent*, uintptr_t))(Il2CppBase() + 0x168B1BC))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(ExtractWorkComponent*, uintptr_t))(Il2CppBase() + 0x168B308))(this, writer);
	}
	template <typename T = bool> T IsDone(uintptr_t world, uintptr_t extractComponent) {
		return ((T (*)(ExtractWorkComponent*, uintptr_t, uintptr_t))(Il2CppBase() + 0x168B38C))(this, world, extractComponent);
	}
	template <typename T = float> T GetProgress(int64_t now, uintptr_t extractComponent) {
		return ((T (*)(ExtractWorkComponent*, int64_t, uintptr_t))(Il2CppBase() + 0x168B518))(this, now, extractComponent);
	}
	template <typename T = bool> T CanSteal(uintptr_t world, uintptr_t extractComponent, int64_t playerId) {
		return ((T (*)(ExtractWorkComponent*, uintptr_t, uintptr_t, int64_t))(Il2CppBase() + 0x168B560))(this, world, extractComponent, playerId);
	}
	template <typename T = bool> T WasRobbed() {
		return ((T (*)(ExtractWorkComponent*))(Il2CppBase() + 0x168B6D8))(this);
	}
	template <typename T = int32_t> T LeftResultResources() {
		return ((T (*)(ExtractWorkComponent*))(Il2CppBase() + 0x168B6E8))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(ExtractWorkComponent*))(Il2CppBase() + 0x168B778))(this);
	}

};

}
