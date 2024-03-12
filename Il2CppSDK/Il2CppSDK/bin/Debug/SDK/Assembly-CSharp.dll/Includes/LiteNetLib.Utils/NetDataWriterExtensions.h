#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiteNetLibUtils {

class NetDataWriterExtensions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiteNetLibUtils", "NetDataWriterExtensions"));
	}


	template <typename T = void> static T Put(uintptr_t writer, void* value) {
		return ((T (*)(void *, uintptr_t, void*))(Il2CppBase() + 0x13AB0E0))(0, writer, value);
	}
	template <typename T = void> static T Put_1(uintptr_t writer, void* value) {
		return ((T (*)(void *, uintptr_t, void*))(Il2CppBase() + 0x13AB19C))(0, writer, value);
	}
	template <typename T = void> static T Put_2(uintptr_t writer, void* value) {
		return ((T (*)(void *, uintptr_t, void*))(Il2CppBase() + 0x13AB254))(0, writer, value);
	}
	template <typename T = void> static T Put_3(uintptr_t writer, void* value) {
		return ((T (*)(void *, uintptr_t, void*))(Il2CppBase() + 0x13AB30C))(0, writer, value);
	}
	template <typename T = void> static T Put_4(uintptr_t writer, void* value) {
		return ((T (*)(void *, uintptr_t, void*))(Il2CppBase() + 0x13AB3D0))(0, writer, value);
	}
	template <typename T = void> static T Put_5(uintptr_t writer, void* value) {
		return ((T (*)(void *, uintptr_t, void*))(Il2CppBase() + 0x13AB484))(0, writer, value);
	}

};

}
