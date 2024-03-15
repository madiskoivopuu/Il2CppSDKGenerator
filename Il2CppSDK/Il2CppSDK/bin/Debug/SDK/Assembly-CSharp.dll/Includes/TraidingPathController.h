#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TraidingPathController
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TraidingPathController"));
	}

	template <typename R = uintptr_t> R& path() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& _shipPrefabs() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& _ship_path() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = float> R& _portDelay() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = float> R& _endDelay() {
		return *(R*)((uintptr_t)this + 0x34);
	}
	template <typename R = float> R& _timeBetween() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = float> R& _speed() {
		return *(R*)((uintptr_t)this + 0x3C);
	}
	template <typename R = float> R& _timeleft() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = float> R& _speed2() {
		return *(R*)((uintptr_t)this + 0x44);
	}
	template <typename R = float> R& _waterResist() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = int32_t> R& _portPosition() {
		return *(R*)((uintptr_t)this + 0x4C);
	}

	template <typename R = void> R Start() {
		return ((R (*)(TraidingPathController*))(Il2CppBase() + 0x1511980))(this);
	}
	template <typename R = void> R FixedUpdate() {
		return ((R (*)(TraidingPathController*))(Il2CppBase() + 0x1511B08))(this);
	}
	template <typename R = uintptr_t> R SpawnShip(int32_t posAtLine, int32_t shipId) {
		return ((R (*)(TraidingPathController*, int32_t, int32_t))(Il2CppBase() + 0x1511A7C))(this, posAtLine, shipId);
	}

};

