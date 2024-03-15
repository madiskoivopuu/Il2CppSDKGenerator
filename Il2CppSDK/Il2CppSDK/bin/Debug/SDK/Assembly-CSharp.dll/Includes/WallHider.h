#pragma once
#include <Il2Cpp/Il2Cpp.h>

class WallHider
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "WallHider"));
	}

	 Il2CppList<WallHiderHelper*>*& _wallsList() {
		return *(Il2CppList<WallHiderHelper*>**)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& collider() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppString*> R& _objectTag() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppString*> R& _playerTag() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = float> R& _delay() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = int32_t> R& _id() {
		return *(R*)((uintptr_t)this + 0x3C);
	}
	template <typename R = float> R& _timeToChange() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = int32_t> static R& _opacity() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& _ids() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x4);
	}

	template <typename R = void> R Start() {
		return ((R (*)(WallHider*))(Il2CppBase() + 0x15D1E84))(this);
	}
	template <typename R = void> R TurnOnCollider() {
		return ((R (*)(WallHider*))(Il2CppBase() + 0x15D1FB8))(this);
	}
	template <typename R = void> R Kostyl() {
		return ((R (*)(WallHider*))(Il2CppBase() + 0x15D1FD8))(this);
	}
	template <typename R = void> R OnTriggerEnter(uintptr_t other) {
		return ((R (*)(WallHider*, uintptr_t))(Il2CppBase() + 0x15D20AC))(this, other);
	}
	template <typename R = void> R OnTriggerExit(uintptr_t other) {
		return ((R (*)(WallHider*, uintptr_t))(Il2CppBase() + 0x15D238C))(this, other);
	}
	template <typename R = uintptr_t> R WallHideUnhide(bool state) {
		return ((R (*)(WallHider*, bool))(Il2CppBase() + 0x15D2300))(this, state);
	}
	template <typename R = void> R SetWallsState(bool state) {
		return ((R (*)(WallHider*, bool))(Il2CppBase() + 0x15D2414))(this, state);
	}
	template <typename R = void> R ChangeId(Il2CppList<WallHiderHelper*>* _wallsList) {
		return ((R (*)(WallHider*, Il2CppList<WallHiderHelper*>*))(Il2CppBase() + 0x15D21E4))(this, _wallsList);
	}

};

