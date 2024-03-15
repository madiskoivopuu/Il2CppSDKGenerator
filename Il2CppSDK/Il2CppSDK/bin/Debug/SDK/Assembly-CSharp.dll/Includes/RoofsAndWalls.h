#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RoofsAndWalls
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RoofsAndWalls"));
	}

	template <typename R = int32_t> R& Width() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& Height() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = Il2CppString*> static R& ROOF() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& _roofs() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = ArenaUnityWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = int32_t> R get_Width() {
		return ((R (*)(RoofsAndWalls*))(Il2CppBase() + 0x11A371C))(this);
	}
	template <typename R = int32_t> R get_Height() {
		return ((R (*)(RoofsAndWalls*))(Il2CppBase() + 0x11A3724))(this);
	}
	template <typename R = DoorsAndWalls*> R get__doorsAndWalls() {
		return ((R (*)(RoofsAndWalls*))(Il2CppBase() + 0x11A372C))(this);
	}
	template <typename R = void> R Fill() {
		return ((R (*)(RoofsAndWalls*))(Il2CppBase() + 0x11A3838))(this);
	}

};

