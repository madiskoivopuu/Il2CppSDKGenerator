#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LocalActionStartData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocalActionStartData"));
	}

	template <typename R = int32_t> R& LocalId() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& ServerId() {
		return *(R*)((uintptr_t)this + 0x4);
	}
	template <typename R = Il2CppString*> R& ItemName() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = int64_t> R& StartTime() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = float> R& DurationCoef() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	 Nullable1<Vec2>*& TargetPosition() {
		return *(Nullable1<Vec2>**)((uintptr_t)this + 0x1C);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(LocalActionStartData*, uintptr_t))(Il2CppBase() + 0x144281C))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(LocalActionStartData*, uintptr_t))(Il2CppBase() + 0x14428E4))(this, reader);
	}

};

