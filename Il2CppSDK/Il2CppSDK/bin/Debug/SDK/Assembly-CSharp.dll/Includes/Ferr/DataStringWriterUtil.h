#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Ferr {

class DataStringWriterUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Ferr", "DataStringWriterUtil"));
	}

	template <typename T = uintptr_t> T& _type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = uintptr_t> T& _builder() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = void*> T& _names() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Int(int32_t aData) {
		return ((T (*)(DataStringWriterUtil*, int32_t))(Il2CppBase() + 0xEB15B0))(this, aData);
	}
	template <typename T = void> T Int_1(Il2CppString* aName, int32_t aData) {
		return ((T (*)(DataStringWriterUtil*, Il2CppString*, int32_t))(Il2CppBase() + 0xEB169C))(this, aName, aData);
	}
	template <typename T = void> T Long(int64_t aData) {
		return ((T (*)(DataStringWriterUtil*, int64_t))(Il2CppBase() + 0xEB18E4))(this, aData);
	}
	template <typename T = void> T Long_1(Il2CppString* aName, int64_t aData) {
		return ((T (*)(DataStringWriterUtil*, Il2CppString*, int64_t))(Il2CppBase() + 0xEB191C))(this, aName, aData);
	}
	template <typename T = void> T Bool(bool aData) {
		return ((T (*)(DataStringWriterUtil*, bool))(Il2CppBase() + 0xEB1964))(this, aData);
	}
	template <typename T = void> T Bool_1(Il2CppString* aName, bool aData) {
		return ((T (*)(DataStringWriterUtil*, Il2CppString*, bool))(Il2CppBase() + 0xEB19A0))(this, aName, aData);
	}
	template <typename T = void> T Float(float aData) {
		return ((T (*)(DataStringWriterUtil*, float))(Il2CppBase() + 0xEB19EC))(this, aData);
	}
	template <typename T = void> T Float_1(Il2CppString* aName, float aData) {
		return ((T (*)(DataStringWriterUtil*, Il2CppString*, float))(Il2CppBase() + 0xEB1A24))(this, aName, aData);
	}
	template <typename T = void> T Data(uintptr_t aData) {
		return ((T (*)(DataStringWriterUtil*, uintptr_t))(Il2CppBase() + 0xEB1A6C))(this, aData);
	}
	template <typename T = void> T Data_1(Il2CppString* aName, uintptr_t aData) {
		return ((T (*)(DataStringWriterUtil*, Il2CppString*, uintptr_t))(Il2CppBase() + 0xEB1B90))(this, aName, aData);
	}
	template <typename T = void> T String(Il2CppString* aData) {
		return ((T (*)(DataStringWriterUtil*, Il2CppString*))(Il2CppBase() + 0xEB1CBC))(this, aData);
	}
	template <typename T = void> T String_1(Il2CppString* aName, Il2CppString* aData) {
		return ((T (*)(DataStringWriterUtil*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xEB1E84))(this, aName, aData);
	}
	template <typename T = char> T GetQuoteType(Il2CppString* aData) {
		return ((T (*)(DataStringWriterUtil*, Il2CppString*))(Il2CppBase() + 0xEB1D40))(this, aData);
	}
	template <typename T = void> T Entry(Il2CppString* aData) {
		return ((T (*)(DataStringWriterUtil*, Il2CppString*))(Il2CppBase() + 0xEB15E8))(this, aData);
	}
	template <typename T = void> T Entry_1(Il2CppString* aName, Il2CppString* aData) {
		return ((T (*)(DataStringWriterUtil*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xEB16E4))(this, aName, aData);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(DataStringWriterUtil*))(Il2CppBase() + 0xEB1F20))(this);
	}

};

}
