#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LobbyActiveTimeComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LobbyActiveTimeComponent"));
	}

	template <typename R = int32_t> R& StartOffset() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& OpenDuration() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = int32_t> R& CloseDuration() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> R& NotifyBeforeOpen() {
		return *(R*)((uintptr_t)this + 0x1C);
	}
	template <typename R = int32_t> R& NotifyBeforeClose() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppString*> R& BeforeOpenText() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppString*> R& OnOpenText() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = Il2CppString*> R& BeforeCloseText() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = Il2CppString*> R& TempBuff() {
		return *(R*)((uintptr_t)this + 0x40);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(LobbyActiveTimeComponent*, Il2CppObject*))(Il2CppBase() + 0x1435FE4))(this, targetObject);
	}
	 ValueTuple3<bool, int64_t, bool>* GetState(ICommonContexts* world) {
		return ((ValueTuple3<bool, int64_t, bool>* (*)(LobbyActiveTimeComponent*, ICommonContexts*))(Il2CppBase() + 0x14360D4))(this, world);
	}

};

