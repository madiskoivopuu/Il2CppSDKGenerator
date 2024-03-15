#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace RpcTools {

class MD5
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "RpcTools", "MD5"));
	}

	template <typename R = int32_t> static R& TokenLengh() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& SignLengh() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = Il2CppArray<uint8_t>*> static R CreateMD5(Il2CppArray<uint8_t>* inputBytes, Il2CppArray<uint8_t>* token) {
		return ((R (*)(void *, Il2CppArray<uint8_t>*, Il2CppArray<uint8_t>*))(Il2CppBase() + 0x11F17D4))(0, inputBytes, token);
	}
	template <typename R = Il2CppArray<uint8_t>*> static R AddMD5ToData(Il2CppArray<uint8_t>* inputBytes, Il2CppArray<uint8_t>* token) {
		return ((R (*)(void *, Il2CppArray<uint8_t>*, Il2CppArray<uint8_t>*))(Il2CppBase() + 0x11F19B4))(0, inputBytes, token);
	}
	template <typename R = Il2CppArray<uint8_t>*> static R VerifyMD5ToData(Il2CppArray<uint8_t>* inputBytes, Il2CppArray<uint8_t>* token) {
		return ((R (*)(void *, Il2CppArray<uint8_t>*, Il2CppArray<uint8_t>*))(Il2CppBase() + 0x11F1A8C))(0, inputBytes, token);
	}
	template <typename R = bool> static R VerifyMD5(Il2CppArray<uint8_t>* data, Il2CppArray<uint8_t>* hashData, Il2CppArray<uint8_t>* token) {
		return ((R (*)(void *, Il2CppArray<uint8_t>*, Il2CppArray<uint8_t>*, Il2CppArray<uint8_t>*))(Il2CppBase() + 0x11F1BA8))(0, data, hashData, token);
	}
	template <typename R = bool> static R SplitDataAndHash(Il2CppArray<uint8_t>* inputBytes, uintptr_t* data, uintptr_t* hash) {
		return ((R (*)(void *, Il2CppArray<uint8_t>*, uintptr_t*, uintptr_t*))(Il2CppBase() + 0x11F1C14))(0, inputBytes, data, hash);
	}
	template <typename R = Il2CppArray<uint8_t>*> static R GenerateToken() {
		return ((R (*)(void *))(Il2CppBase() + 0x11F1D20))(0);
	}

};

}
