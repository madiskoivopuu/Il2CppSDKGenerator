#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace LiteNetLibUtils {

class NetDataReaderExtensions
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "LiteNetLibUtils", "NetDataReaderExtensions"));
	}


	template <typename T = UdpDisconnectReason*> static T GetUdpDisconnectReason(uintptr_t disconnectInfo) {
		return ((T (*)(void *, uintptr_t))(Il2CppBase() + 0x13A98D0))(0, disconnectInfo);
	}
	template <typename T = bool> static T TryGet(uintptr_t reader, uintptr_t* result) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x13A9920))(0, reader, result);
	}
	template <typename T = bool> static T TryGet_1(uintptr_t reader, uintptr_t* result) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x13A997C))(0, reader, result);
	}
	template <typename T = bool> static T TryGet_2(uintptr_t reader, uintptr_t* result) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x13A99D8))(0, reader, result);
	}
	template <typename T = bool> static T TryGet_3(uintptr_t reader, uintptr_t* result) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x13A9A34))(0, reader, result);
	}
	template <typename T = bool> static T TryGet_4(uintptr_t reader, uintptr_t* result) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x13A9B08))(0, reader, result);
	}
	template <typename T = bool> static T TryGet_5(uintptr_t reader, uintptr_t* result) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x13A9BDC))(0, reader, result);
	}
	template <typename T = bool> static T TryGet_6(uintptr_t reader, uintptr_t* result) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x13A9CB0))(0, reader, result);
	}
	template <typename T = bool> static T TryGet_7(uintptr_t reader, uintptr_t* result) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x13A9D8C))(0, reader, result);
	}
	template <typename T = bool> static T TryGet_8(uintptr_t reader, uintptr_t* result) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x13A9E60))(0, reader, result);
	}
	template <typename T = bool> static T TryGet_9(uintptr_t reader, uintptr_t* result) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x13A9F34))(0, reader, result);
	}
	template <typename T = bool> static T TryGet_10(uintptr_t reader, uintptr_t* result) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x13A9740))(0, reader, result);
	}
	template <typename T = bool> static T TryGet_11(uintptr_t reader, uintptr_t* result) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x13AA004))(0, reader, result);
	}
	template <typename T = bool> static T TryGet_12(uintptr_t reader, uintptr_t* result) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x13AA060))(0, reader, result);
	}
	template <typename T = bool> static T TryGet_13(uintptr_t reader, uintptr_t* result) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x13AA0BC))(0, reader, result);
	}
	template <typename T = bool> static T TryGet_14(uintptr_t reader, uintptr_t* result) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x13AA118))(0, reader, result);
	}
	template <typename T = bool> static T TryGet_15(uintptr_t reader, uintptr_t* result) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x13AA174))(0, reader, result);
	}
	template <typename T = bool> static T TryGet_16(uintptr_t reader, uintptr_t* result) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x13AA1CC))(0, reader, result);
	}
	template <typename T = bool> static T TryGet_17(uintptr_t reader, uintptr_t* result, bool nullEmpty) {
		return ((T (*)(void *, uintptr_t, uintptr_t*, bool))(Il2CppBase() + 0x13AA1E4))(0, reader, result, nullEmpty);
	}
	template <typename T = bool> static T TryGet_18(uintptr_t reader, uintptr_t* result, bool nullEmpty) {
		return ((T (*)(void *, uintptr_t, uintptr_t*, bool))(Il2CppBase() + 0x13AA314))(0, reader, result, nullEmpty);
	}
	template <typename T = bool> static T TryGet_19(uintptr_t reader, uintptr_t* result, bool nullEmpty) {
		return ((T (*)(void *, uintptr_t, uintptr_t*, bool))(Il2CppBase() + 0x13AA440))(0, reader, result, nullEmpty);
	}
	template <typename T = bool> static T TryGet_20(uintptr_t reader, uintptr_t* result, bool nullEmpty) {
		return ((T (*)(void *, uintptr_t, uintptr_t*, bool))(Il2CppBase() + 0x13AA56C))(0, reader, result, nullEmpty);
	}
	template <typename T = bool> static T TryGet_21(uintptr_t reader, uintptr_t* result, bool nullEmpty) {
		return ((T (*)(void *, uintptr_t, uintptr_t*, bool))(Il2CppBase() + 0x13A92B4))(0, reader, result, nullEmpty);
	}
	template <typename T = bool> static T TryGet_22(uintptr_t reader, uintptr_t* result, bool nullEmpty) {
		return ((T (*)(void *, uintptr_t, uintptr_t*, bool))(Il2CppBase() + 0x13AA698))(0, reader, result, nullEmpty);
	}
	template <typename T = bool> static T TryGet_23(uintptr_t reader, uintptr_t* result, bool nullEmpty) {
		return ((T (*)(void *, uintptr_t, uintptr_t*, bool))(Il2CppBase() + 0x13AA7C4))(0, reader, result, nullEmpty);
	}
	template <typename T = void> static T Put(uintptr_t writer, Commands* commandId) {
		return ((T (*)(void *, uintptr_t, Commands*))(Il2CppBase() + 0x13AA8F0))(0, writer, commandId);
	}
	template <typename T = void> static T Put_1(uintptr_t writer, RPCCommands* commandId) {
		return ((T (*)(void *, uintptr_t, RPCCommands*))(Il2CppBase() + 0x13AA908))(0, writer, commandId);
	}
	template <typename T = bool> static T TryGet_24(uintptr_t reader, uintptr_t* result) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x13AA920))(0, reader, result);
	}
	template <typename T = bool> static T TryGet_25(uintptr_t reader, uintptr_t* result) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x13AA95C))(0, reader, result);
	}
	template <typename T = bool> static T TryGet_26(uintptr_t reader, uintptr_t* result, bool nullEmpty) {
		return ((T (*)(void *, uintptr_t, uintptr_t*, bool))(Il2CppBase() + 0x0))(0, reader, result, nullEmpty);
	}
	template <typename T = bool> static T TryGet_27(uintptr_t reader, uintptr_t* result, bool nullEmpty) {
		return ((T (*)(void *, uintptr_t, uintptr_t*, bool))(Il2CppBase() + 0x0))(0, reader, result, nullEmpty);
	}
	template <typename T = void> static T Put_2(uintptr_t writer, Il2CppArray<uintptr_t>* value) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x0))(0, writer, value);
	}
	template <typename T = void> static T Put_3(uintptr_t writer, Il2CppList<uintptr_t>* value) {
		return ((T (*)(void *, uintptr_t, Il2CppList<uintptr_t>*))(Il2CppBase() + 0x0))(0, writer, value);
	}
	template <typename T = bool> static T TryGetClass(uintptr_t reader, uintptr_t* result) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x0))(0, reader, result);
	}
	template <typename T = bool> static T TryGetStruct(uintptr_t reader, uintptr_t* result) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x0))(0, reader, result);
	}
	template <typename T = bool> static T TryGetStruct_1(uintptr_t reader, uintptr_t* result) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x0))(0, reader, result);
	}
	template <typename T = void> static T PutStruct(uintptr_t writer, uintptr_t structValue) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(0, writer, structValue);
	}
	template <typename T = void> static T PutStruct_1(uintptr_t writer, Nullable1uintptr_t>* structValue) {
		return ((T (*)(void *, uintptr_t, Nullable1uintptr_t>*))(Il2CppBase() + 0x0))(0, writer, structValue);
	}
	template <typename T = void> static T PutClass(uintptr_t writer, uintptr_t classValue) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x0))(0, writer, classValue);
	}
	template <typename T = bool> static T TryGetMappedString(uintptr_t reader, uintptr_t* result) {
		return ((T (*)(void *, uintptr_t, uintptr_t*))(Il2CppBase() + 0x13A979C))(0, reader, result);
	}
	template <typename T = void> static T PutMappedString(uintptr_t writer, Il2CppString* value) {
		return ((T (*)(void *, uintptr_t, Il2CppString*))(Il2CppBase() + 0x13A9874))(0, writer, value);
	}
	template <typename T = bool> static T TryGetMappedStrings(uintptr_t reader, uintptr_t* result, bool nullEmpty) {
		return ((T (*)(void *, uintptr_t, uintptr_t*, bool))(Il2CppBase() + 0x13AA998))(0, reader, result, nullEmpty);
	}
	template <typename T = bool> static T TryGetMappedStrings_1(uintptr_t reader, uintptr_t* result, bool nullEmpty) {
		return ((T (*)(void *, uintptr_t, uintptr_t*, bool))(Il2CppBase() + 0x13AAB08))(0, reader, result, nullEmpty);
	}
	template <typename T = bool> static T TryGetMappedStrings_2(uintptr_t reader, uintptr_t* result, bool nullEmpty) {
		return ((T (*)(void *, uintptr_t, uintptr_t*, bool))(Il2CppBase() + 0x13AAC68))(0, reader, result, nullEmpty);
	}
	template <typename T = void> static T PutMappedStrings(uintptr_t writer, Il2CppArray<uintptr_t>* values) {
		return ((T (*)(void *, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x13AADC4))(0, writer, values);
	}
	template <typename T = void> static T PutMappedStrings_1(uintptr_t writer, Il2CppList<Il2CppString*>* values) {
		return ((T (*)(void *, uintptr_t, Il2CppList<Il2CppString*>*))(Il2CppBase() + 0x13AAE88))(0, writer, values);
	}
	template <typename T = void> static T PutMappedStrings_2(uintptr_t writer, HashSet1Il2CppString*>* values) {
		return ((T (*)(void *, uintptr_t, HashSet1Il2CppString*>*))(Il2CppBase() + 0x13AAF70))(0, writer, values);
	}

};

}
