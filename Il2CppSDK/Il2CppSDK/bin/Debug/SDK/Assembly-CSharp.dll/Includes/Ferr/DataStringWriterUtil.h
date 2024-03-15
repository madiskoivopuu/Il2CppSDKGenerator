#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace Ferr {

class DataStringWriterUtil
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "Ferr", "DataStringWriterUtil"));
	}

	template <typename R = Ferr::DataStringType*> R& _type() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = uintptr_t> R& _builder() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	 HashSet1Il2CppString*>*& _names() {
		return *(HashSet1Il2CppString*>**)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R Int(int32_t aData) {
		return ((R (*)(DataStringWriterUtil*, int32_t))(Il2CppBase() + 0xEB15B0))(this, aData);
	}
	template <typename R = void> R Int_1(Il2CppString* aName, int32_t aData) {
		return ((R (*)(DataStringWriterUtil*, Il2CppString*, int32_t))(Il2CppBase() + 0xEB169C))(this, aName, aData);
	}
	template <typename R = void> R Long(int64_t aData) {
		return ((R (*)(DataStringWriterUtil*, int64_t))(Il2CppBase() + 0xEB18E4))(this, aData);
	}
	template <typename R = void> R Long_1(Il2CppString* aName, int64_t aData) {
		return ((R (*)(DataStringWriterUtil*, Il2CppString*, int64_t))(Il2CppBase() + 0xEB191C))(this, aName, aData);
	}
	template <typename R = void> R Bool(bool aData) {
		return ((R (*)(DataStringWriterUtil*, bool))(Il2CppBase() + 0xEB1964))(this, aData);
	}
	template <typename R = void> R Bool_1(Il2CppString* aName, bool aData) {
		return ((R (*)(DataStringWriterUtil*, Il2CppString*, bool))(Il2CppBase() + 0xEB19A0))(this, aName, aData);
	}
	template <typename R = void> R Float(float aData) {
		return ((R (*)(DataStringWriterUtil*, float))(Il2CppBase() + 0xEB19EC))(this, aData);
	}
	template <typename R = void> R Float_1(Il2CppString* aName, float aData) {
		return ((R (*)(DataStringWriterUtil*, Il2CppString*, float))(Il2CppBase() + 0xEB1A24))(this, aName, aData);
	}
	template <typename R = void> R Data(Ferr::IToFromDataString* aData) {
		return ((R (*)(DataStringWriterUtil*, Ferr::IToFromDataString*))(Il2CppBase() + 0xEB1A6C))(this, aData);
	}
	template <typename R = void> R Data_1(Il2CppString* aName, Ferr::IToFromDataString* aData) {
		return ((R (*)(DataStringWriterUtil*, Il2CppString*, Ferr::IToFromDataString*))(Il2CppBase() + 0xEB1B90))(this, aName, aData);
	}
	template <typename R = void> R String(Il2CppString* aData) {
		return ((R (*)(DataStringWriterUtil*, Il2CppString*))(Il2CppBase() + 0xEB1CBC))(this, aData);
	}
	template <typename R = void> R String_1(Il2CppString* aName, Il2CppString* aData) {
		return ((R (*)(DataStringWriterUtil*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xEB1E84))(this, aName, aData);
	}
	template <typename R = char> R GetQuoteType(Il2CppString* aData) {
		return ((R (*)(DataStringWriterUtil*, Il2CppString*))(Il2CppBase() + 0xEB1D40))(this, aData);
	}
	template <typename R = void> R Entry(Il2CppString* aData) {
		return ((R (*)(DataStringWriterUtil*, Il2CppString*))(Il2CppBase() + 0xEB15E8))(this, aData);
	}
	template <typename R = void> R Entry_1(Il2CppString* aName, Il2CppString* aData) {
		return ((R (*)(DataStringWriterUtil*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0xEB16E4))(this, aName, aData);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(DataStringWriterUtil*))(Il2CppBase() + 0xEB1F20))(this);
	}

};

}
