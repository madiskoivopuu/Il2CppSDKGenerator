#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RpcTools {

class MD5
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RpcTools", "MD5"));
	}

	template <typename T = int32_t> static T& TokenLengh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& SignLengh() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename T = Il2CppArray<uintptr_t>*> static T CreateMD5(Il2CppArray<uintptr_t>* inputBytes, Il2CppArray<uintptr_t>* token) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x11F17D4))(0, inputBytes, token);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T AddMD5ToData(Il2CppArray<uintptr_t>* inputBytes, Il2CppArray<uintptr_t>* token) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x11F19B4))(0, inputBytes, token);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T VerifyMD5ToData(Il2CppArray<uintptr_t>* inputBytes, Il2CppArray<uintptr_t>* token) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x11F1A8C))(0, inputBytes, token);
	}
	template <typename T = bool> static T VerifyMD5(Il2CppArray<uintptr_t>* data, Il2CppArray<uintptr_t>* hashData, Il2CppArray<uintptr_t>* token) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x11F1BA8))(0, data, hashData, token);
	}
	template <typename T = bool> static T SplitDataAndHash(Il2CppArray<uintptr_t>* inputBytes, uintptr_t* data, uintptr_t* hash) {
		return ((T (*)(void *, Il2CppArray<uintptr_t>*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x11F1C14))(0, inputBytes, data, hash);
	}
	template <typename T = Il2CppArray<uintptr_t>*> static T GenerateToken() {
		return ((T (*)(void *))(Il2CppBase() + 0x11F1D20))(0);
	}

};

}
