#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CheatsAddData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CheatsAddData"));
	}

	template <typename R = Kinds> R& Kind() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = int32_t> R& IntParam() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	 Nullable1<float>*& FloatParam() {
		return *(Nullable1<float>**)((uintptr_t)this + 0x14);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(CheatsAddData*, uintptr_t))(Il2CppBase() + 0x173CFD8))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(CheatsAddData*, uintptr_t))(Il2CppBase() + 0x173D04C))(this, reader);
	}

};

