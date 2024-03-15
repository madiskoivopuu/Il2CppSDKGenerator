#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class PvpGroup
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "PvpGroup"));
	}

	 static MessageParser1<ProtoModels::PvpGroup*>*& _parser() {
		return *(MessageParser1<ProtoModels::PvpGroup*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& IDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& iD_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& ClansFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<ProtoModels::Clan*>*& _repeated_clans_codec() {
		return *(FieldCodec1<ProtoModels::Clan*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1<ProtoModels::Clan*>*& clans_() {
		return *(RepeatedField1<ProtoModels::Clan*>**)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& TransitionFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::PvpTransition*> R& transition_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& StartTimeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& startTime_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& DurationFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& duration_() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> static R& SearchDurationFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& searchDuration_() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = int32_t> static R& DiplomaciesFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<ProtoModels::Diplomacy*>*& _repeated_diplomacies_codec() {
		return *(FieldCodec1<ProtoModels::Diplomacy*>**)((uintptr_t)StaticClass()->static_fields + 0x10);
	}
	 RepeatedField1<ProtoModels::Diplomacy*>*& diplomacies_() {
		return *(RepeatedField1<ProtoModels::Diplomacy*>**)((uintptr_t)this + 0x40);
	}

	 static MessageParser1<ProtoModels::PvpGroup*>* get_Parser() {
		return ((MessageParser1<ProtoModels::PvpGroup*>* (*)(void *))(Il2CppBase() + 0x11BF678))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x11BF6DC))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(PvpGroup*))(Il2CppBase() + 0x11BF7FC))(this);
	}
	template <typename R = ProtoModels::PvpGroup*> R Clone() {
		return ((R (*)(PvpGroup*))(Il2CppBase() + 0x11BFA78))(this);
	}
	template <typename R = int64_t> R get_ID() {
		return ((R (*)(PvpGroup*))(Il2CppBase() + 0x11BFAD4))(this);
	}
	template <typename R = void> R set_ID(int64_t value) {
		return ((R (*)(PvpGroup*, int64_t))(Il2CppBase() + 0x11BFADC))(this, value);
	}
	 RepeatedField1<ProtoModels::Clan*>* get_Clans() {
		return ((RepeatedField1<ProtoModels::Clan*>* (*)(PvpGroup*))(Il2CppBase() + 0x11BFAE4))(this);
	}
	template <typename R = ProtoModels::PvpTransition*> R get_Transition() {
		return ((R (*)(PvpGroup*))(Il2CppBase() + 0x11BFAEC))(this);
	}
	template <typename R = void> R set_Transition(ProtoModels::PvpTransition* value) {
		return ((R (*)(PvpGroup*, ProtoModels::PvpTransition*))(Il2CppBase() + 0x11BFAF4))(this, value);
	}
	template <typename R = int64_t> R get_StartTime() {
		return ((R (*)(PvpGroup*))(Il2CppBase() + 0x11BFAFC))(this);
	}
	template <typename R = void> R set_StartTime(int64_t value) {
		return ((R (*)(PvpGroup*, int64_t))(Il2CppBase() + 0x11BFB04))(this, value);
	}
	template <typename R = int64_t> R get_Duration() {
		return ((R (*)(PvpGroup*))(Il2CppBase() + 0x11BFB0C))(this);
	}
	template <typename R = void> R set_Duration(int64_t value) {
		return ((R (*)(PvpGroup*, int64_t))(Il2CppBase() + 0x11BFB14))(this, value);
	}
	template <typename R = int64_t> R get_SearchDuration() {
		return ((R (*)(PvpGroup*))(Il2CppBase() + 0x11BFB1C))(this);
	}
	template <typename R = void> R set_SearchDuration(int64_t value) {
		return ((R (*)(PvpGroup*, int64_t))(Il2CppBase() + 0x11BFB24))(this, value);
	}
	 RepeatedField1<ProtoModels::Diplomacy*>* get_Diplomacies() {
		return ((RepeatedField1<ProtoModels::Diplomacy*>* (*)(PvpGroup*))(Il2CppBase() + 0x11BFB2C))(this);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(PvpGroup*, Il2CppObject*))(Il2CppBase() + 0x11BFB34))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::PvpGroup* other) {
		return ((R (*)(PvpGroup*, ProtoModels::PvpGroup*))(Il2CppBase() + 0x11BFBA4))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(PvpGroup*))(Il2CppBase() + 0x11BFCB0))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(PvpGroup*))(Il2CppBase() + 0x11BFDA0))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(PvpGroup*, uintptr_t))(Il2CppBase() + 0x11BFE04))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(PvpGroup*))(Il2CppBase() + 0x11BFFD0))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::PvpGroup* other) {
		return ((R (*)(PvpGroup*, ProtoModels::PvpGroup*))(Il2CppBase() + 0x11C01FC))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(PvpGroup*, uintptr_t))(Il2CppBase() + 0x11C0368))(this, input);
	}

};

}
