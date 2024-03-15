#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class GlobalMapClanSaveDataType
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "GlobalMapClanSaveDataType"));
	}

	 static MessageParser1ProtoModels::GlobalMapClanSaveDataType*>*& _parser() {
		return *(MessageParser1ProtoModels::GlobalMapClanSaveDataType*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& PVEFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1ProtoModels::GlobalMapPveSaveType*>*& _repeated_pVE_codec() {
		return *(FieldCodec1ProtoModels::GlobalMapPveSaveType*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1ProtoModels::GlobalMapPveSaveType*>*& pVE_() {
		return *(RepeatedField1ProtoModels::GlobalMapPveSaveType*>**)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& TimeLocationResetFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static Codecint64_t, int64_t>*& _map_timeLocationReset_codec() {
		return *(Codecint64_t, int64_t>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 MapField2int64_t, int64_t>*& timeLocationReset_() {
		return *(MapField2int64_t, int64_t>**)((uintptr_t)this + 0x18);
	}

	 static MessageParser1ProtoModels::GlobalMapClanSaveDataType*>* get_Parser() {
		return ((MessageParser1ProtoModels::GlobalMapClanSaveDataType*>* (*)(void *))(Il2CppBase() + 0x12D5EB8))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x12D5F1C))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(GlobalMapClanSaveDataType*))(Il2CppBase() + 0x12D603C))(this);
	}
	template <typename R = ProtoModels::GlobalMapClanSaveDataType*> R Clone() {
		return ((R (*)(GlobalMapClanSaveDataType*))(Il2CppBase() + 0x12D6214))(this);
	}
	 RepeatedField1ProtoModels::GlobalMapPveSaveType*>* get_PVE() {
		return ((RepeatedField1ProtoModels::GlobalMapPveSaveType*>* (*)(GlobalMapClanSaveDataType*))(Il2CppBase() + 0x12D6270))(this);
	}
	 MapField2int64_t, int64_t>* get_TimeLocationReset() {
		return ((MapField2int64_t, int64_t>* (*)(GlobalMapClanSaveDataType*))(Il2CppBase() + 0x12D6278))(this);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(GlobalMapClanSaveDataType*, Il2CppObject*))(Il2CppBase() + 0x12D6280))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::GlobalMapClanSaveDataType* other) {
		return ((R (*)(GlobalMapClanSaveDataType*, ProtoModels::GlobalMapClanSaveDataType*))(Il2CppBase() + 0x12D62F0))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(GlobalMapClanSaveDataType*))(Il2CppBase() + 0x12D63A8))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(GlobalMapClanSaveDataType*))(Il2CppBase() + 0x12D6400))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(GlobalMapClanSaveDataType*, uintptr_t))(Il2CppBase() + 0x12D6464))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(GlobalMapClanSaveDataType*))(Il2CppBase() + 0x12D6538))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::GlobalMapClanSaveDataType* other) {
		return ((R (*)(GlobalMapClanSaveDataType*, ProtoModels::GlobalMapClanSaveDataType*))(Il2CppBase() + 0x12D6610))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(GlobalMapClanSaveDataType*, uintptr_t))(Il2CppBase() + 0x12D66B0))(this, input);
	}

};

}
