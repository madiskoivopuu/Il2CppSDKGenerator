#pragma once
#include <Il2Cpp/Il2Cpp.h>

class NameChance
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "NameChance"));
	}

	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = float> R& Chance() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = Il2CppString*> R& ChanceName() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = NameChance*> static R& Empty() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = float> R GetChanceValue(ICommonContexts* world, GameEntity* actor) {
		return ((R (*)(NameChance*, ICommonContexts*, GameEntity*))(Il2CppBase() + 0xEAA1B4))(this, world, actor);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(NameChance*, uintptr_t))(Il2CppBase() + 0xEAA2C8))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(NameChance*, uintptr_t))(Il2CppBase() + 0xEAA390))(this, writer);
	}
	template <typename R = bool> R Equals(NameChance* other) {
		return ((R (*)(NameChance*, NameChance*))(Il2CppBase() + 0xEAA3E8))(this, other);
	}
	template <typename R = bool> R Equals_1(Il2CppObject* obj) {
		return ((R (*)(NameChance*, Il2CppObject*))(Il2CppBase() + 0xEAA448))(this, obj);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(NameChance*))(Il2CppBase() + 0xEAA4E4))(this);
	}

};

