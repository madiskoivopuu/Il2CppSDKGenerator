#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class ArenaGetWorldDataResponse
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "ArenaGetWorldDataResponse"));
	}

	 static MessageParser1<ProtoModels::ArenaGetWorldDataResponse*>*& _parser() {
		return *(MessageParser1<ProtoModels::ArenaGetWorldDataResponse*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& CodeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& code_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& CodeMessageFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& codeMessage_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& WasChangesFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& wasChanges_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& JsonDataFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<Il2CppString*>*& _repeated_jsonData_codec() {
		return *(FieldCodec1<Il2CppString*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1<Il2CppString*>*& jsonData_() {
		return *(RepeatedField1<Il2CppString*>**)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& CellOwnerFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<int64_t>*& _repeated_cellOwner_codec() {
		return *(FieldCodec1<int64_t>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 RepeatedField1<int64_t>*& cellOwner_() {
		return *(RepeatedField1<int64_t>**)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> static R& CellOwnerSupportFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = bool> R& cellOwnerSupport_() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = int32_t> static R& StatsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<ProtoModels::SummaryItemStats*>*& _repeated_stats_codec() {
		return *(FieldCodec1<ProtoModels::SummaryItemStats*>**)((uintptr_t)StaticClass()->static_fields + 0x18);
	}
	 RepeatedField1<ProtoModels::SummaryItemStats*>*& stats_() {
		return *(RepeatedField1<ProtoModels::SummaryItemStats*>**)((uintptr_t)this + 0x40);
	}
	template <typename R = int32_t> static R& MountEndTimeUnixFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static Codec<int64_t, int64_t>*& _map_mountEndTimeUnix_codec() {
		return *(Codec<int64_t, int64_t>**)((uintptr_t)StaticClass()->static_fields + 0x20);
	}
	 MapField2<int64_t, int64_t>*& mountEndTimeUnix_() {
		return *(MapField2<int64_t, int64_t>**)((uintptr_t)this + 0x48);
	}
	template <typename R = int32_t> static R& OwnerStatsFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<ProtoModels::SummaryOwnerStats*>*& _repeated_ownerStats_codec() {
		return *(FieldCodec1<ProtoModels::SummaryOwnerStats*>**)((uintptr_t)StaticClass()->static_fields + 0x28);
	}
	 RepeatedField1<ProtoModels::SummaryOwnerStats*>*& ownerStats_() {
		return *(RepeatedField1<ProtoModels::SummaryOwnerStats*>**)((uintptr_t)this + 0x50);
	}

	 static MessageParser1<ProtoModels::ArenaGetWorldDataResponse*>* get_Parser() {
		return ((MessageParser1<ProtoModels::ArenaGetWorldDataResponse*>* (*)(void *))(Il2CppBase() + 0x1E25974))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1E259D8))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(ArenaGetWorldDataResponse*))(Il2CppBase() + 0x1E25AF8))(this);
	}
	template <typename R = ProtoModels::ArenaGetWorldDataResponse*> R Clone() {
		return ((R (*)(ArenaGetWorldDataResponse*))(Il2CppBase() + 0x1E25EA0))(this);
	}
	template <typename R = int32_t> R get_Code() {
		return ((R (*)(ArenaGetWorldDataResponse*))(Il2CppBase() + 0x1E25EFC))(this);
	}
	template <typename R = void> R set_Code(int32_t value) {
		return ((R (*)(ArenaGetWorldDataResponse*, int32_t))(Il2CppBase() + 0x1E25F04))(this, value);
	}
	template <typename R = Il2CppString*> R get_CodeMessage() {
		return ((R (*)(ArenaGetWorldDataResponse*))(Il2CppBase() + 0x1E25F0C))(this);
	}
	template <typename R = void> R set_CodeMessage(Il2CppString* value) {
		return ((R (*)(ArenaGetWorldDataResponse*, Il2CppString*))(Il2CppBase() + 0x1E25F14))(this, value);
	}
	template <typename R = bool> R get_WasChanges() {
		return ((R (*)(ArenaGetWorldDataResponse*))(Il2CppBase() + 0x1E25F94))(this);
	}
	template <typename R = void> R set_WasChanges(bool value) {
		return ((R (*)(ArenaGetWorldDataResponse*, bool))(Il2CppBase() + 0x1E25F9C))(this, value);
	}
	 RepeatedField1<Il2CppString*>* get_JsonData() {
		return ((RepeatedField1<Il2CppString*>* (*)(ArenaGetWorldDataResponse*))(Il2CppBase() + 0x1E25FA8))(this);
	}
	 RepeatedField1<int64_t>* get_CellOwner() {
		return ((RepeatedField1<int64_t>* (*)(ArenaGetWorldDataResponse*))(Il2CppBase() + 0x1E25FB0))(this);
	}
	template <typename R = bool> R get_CellOwnerSupport() {
		return ((R (*)(ArenaGetWorldDataResponse*))(Il2CppBase() + 0x1E25FB8))(this);
	}
	template <typename R = void> R set_CellOwnerSupport(bool value) {
		return ((R (*)(ArenaGetWorldDataResponse*, bool))(Il2CppBase() + 0x1E25FC0))(this, value);
	}
	 RepeatedField1<ProtoModels::SummaryItemStats*>* get_Stats() {
		return ((RepeatedField1<ProtoModels::SummaryItemStats*>* (*)(ArenaGetWorldDataResponse*))(Il2CppBase() + 0x1E25FCC))(this);
	}
	 MapField2<int64_t, int64_t>* get_MountEndTimeUnix() {
		return ((MapField2<int64_t, int64_t>* (*)(ArenaGetWorldDataResponse*))(Il2CppBase() + 0x1E25FD4))(this);
	}
	 RepeatedField1<ProtoModels::SummaryOwnerStats*>* get_OwnerStats() {
		return ((RepeatedField1<ProtoModels::SummaryOwnerStats*>* (*)(ArenaGetWorldDataResponse*))(Il2CppBase() + 0x1E25FDC))(this);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(ArenaGetWorldDataResponse*, Il2CppObject*))(Il2CppBase() + 0x1E25FE4))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::ArenaGetWorldDataResponse* other) {
		return ((R (*)(ArenaGetWorldDataResponse*, ProtoModels::ArenaGetWorldDataResponse*))(Il2CppBase() + 0x1E26054))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(ArenaGetWorldDataResponse*))(Il2CppBase() + 0x1E261F4))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(ArenaGetWorldDataResponse*))(Il2CppBase() + 0x1E26330))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(ArenaGetWorldDataResponse*, uintptr_t))(Il2CppBase() + 0x1E26394))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(ArenaGetWorldDataResponse*))(Il2CppBase() + 0x1E265D8))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::ArenaGetWorldDataResponse* other) {
		return ((R (*)(ArenaGetWorldDataResponse*, ProtoModels::ArenaGetWorldDataResponse*))(Il2CppBase() + 0x1E26828))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(ArenaGetWorldDataResponse*, uintptr_t))(Il2CppBase() + 0x1E2697C))(this, input);
	}

};

}
