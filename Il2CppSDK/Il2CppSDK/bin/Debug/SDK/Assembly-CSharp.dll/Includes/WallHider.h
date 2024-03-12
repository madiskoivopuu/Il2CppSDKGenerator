#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WallHider
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WallHider"));
	}

	template <typename T = Il2CppList<uintptr_t>*> T& _wallsList() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& collider() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& _objectTag() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& _playerTag() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = float> T& _delay() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> T& _id() {
		return *(T*)((uintptr_t)this + 0x3C);
	}
	template <typename T = float> T& _timeToChange() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> static T& _opacity() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& _ids() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename T = void> T Start() {
		return ((T (*)(WallHider*))(Il2CppBase() + 0x15D1E84))(this);
	}
	template <typename T = void> T TurnOnCollider() {
		return ((T (*)(WallHider*))(Il2CppBase() + 0x15D1FB8))(this);
	}
	template <typename T = void> T Kostyl() {
		return ((T (*)(WallHider*))(Il2CppBase() + 0x15D1FD8))(this);
	}
	template <typename T = void> T OnTriggerEnter(uintptr_t other) {
		return ((T (*)(WallHider*, uintptr_t))(Il2CppBase() + 0x15D20AC))(this, other);
	}
	template <typename T = void> T OnTriggerExit(uintptr_t other) {
		return ((T (*)(WallHider*, uintptr_t))(Il2CppBase() + 0x15D238C))(this, other);
	}
	template <typename T = uintptr_t> T WallHideUnhide(bool state) {
		return ((T (*)(WallHider*, bool))(Il2CppBase() + 0x15D2300))(this, state);
	}
	template <typename T = void> T SetWallsState(bool state) {
		return ((T (*)(WallHider*, bool))(Il2CppBase() + 0x15D2414))(this, state);
	}
	template <typename T = void> T ChangeId(Il2CppList<uintptr_t>* _wallsList) {
		return ((T (*)(WallHider*, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x15D21E4))(this, _wallsList);
	}

};

}
