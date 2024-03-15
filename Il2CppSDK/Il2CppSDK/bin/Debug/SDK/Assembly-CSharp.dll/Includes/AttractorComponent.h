#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AttractorComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AttractorComponent"));
	}

	template <typename R = DirectionType> R& Direction() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& Distance() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = Il2CppString*> R& ProjectileName() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppArray<Il2CppString*>*> R& OnCollisionMagics() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(AttractorComponent*, Il2CppObject*))(Il2CppBase() + 0x1A5B5FC))(this, target);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(AttractorComponent*, uintptr_t))(Il2CppBase() + 0x1A5B6B4))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(AttractorComponent*, uintptr_t))(Il2CppBase() + 0x1A5B7B8))(this, writer);
	}

};

