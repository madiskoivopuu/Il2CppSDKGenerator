#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LocalActionStartData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocalActionStartData"));
	}

	template <typename T = int32_t> T& LocalId() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& ServerId() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = Il2CppString*> T& ItemName() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int64_t> T& StartTime() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = float> T& DurationCoef() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Nullable1Vec2*>*> T& TargetPosition() {
		return *(T*)((uintptr_t)this + 0x1C);
	}

	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(LocalActionStartData*, uintptr_t))(Il2CppBase() + 0x144281C))(this, writer);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(LocalActionStartData*, uintptr_t))(Il2CppBase() + 0x14428E4))(this, reader);
	}

};

