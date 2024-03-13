#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AttractorComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AttractorComponent"));
	}

	template <typename T = DirectionType*> T& Direction() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& Distance() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Il2CppString*> T& ProjectileName() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& OnCollisionMagics() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(AttractorComponent*, Il2CppObject*))(Il2CppBase() + 0x1A5B5FC))(this, target);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(AttractorComponent*, uintptr_t))(Il2CppBase() + 0x1A5B6B4))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(AttractorComponent*, uintptr_t))(Il2CppBase() + 0x1A5B7B8))(this, writer);
	}

};

