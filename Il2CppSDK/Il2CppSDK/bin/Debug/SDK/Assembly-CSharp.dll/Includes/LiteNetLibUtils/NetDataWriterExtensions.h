#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiteNetLibUtils {

class NetDataWriterExtensions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiteNetLibUtils", "NetDataWriterExtensions"));
	}


	template <typename R = void> static R Put(uintptr_t writer, Nullable1<int8_t>* value) {
		return ((R (*)(void *, uintptr_t, Nullable1<int8_t>*))(Il2CppBase() + 0x13AB0E0))(0, writer, value);
	}
	template <typename R = void> static R Put_1(uintptr_t writer, Nullable1<int32_t>* value) {
		return ((R (*)(void *, uintptr_t, Nullable1<int32_t>*))(Il2CppBase() + 0x13AB19C))(0, writer, value);
	}
	template <typename R = void> static R Put_2(uintptr_t writer, Nullable1<uint32_t>* value) {
		return ((R (*)(void *, uintptr_t, Nullable1<uint32_t>*))(Il2CppBase() + 0x13AB254))(0, writer, value);
	}
	template <typename R = void> static R Put_3(uintptr_t writer, Nullable1<int64_t>* value) {
		return ((R (*)(void *, uintptr_t, Nullable1<int64_t>*))(Il2CppBase() + 0x13AB30C))(0, writer, value);
	}
	template <typename R = void> static R Put_4(uintptr_t writer, Nullable1<float>* value) {
		return ((R (*)(void *, uintptr_t, Nullable1<float>*))(Il2CppBase() + 0x13AB3D0))(0, writer, value);
	}
	template <typename R = void> static R Put_5(uintptr_t writer, Nullable1<bool>* value) {
		return ((R (*)(void *, uintptr_t, Nullable1<bool>*))(Il2CppBase() + 0x13AB484))(0, writer, value);
	}

};

}
