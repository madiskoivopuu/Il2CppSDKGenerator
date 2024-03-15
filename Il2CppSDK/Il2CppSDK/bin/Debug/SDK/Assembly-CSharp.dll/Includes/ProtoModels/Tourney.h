#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class Tourney
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "Tourney"));
	}

	 static MessageParser1<ProtoModels::Tourney*>*& _parser() {
		return *(MessageParser1<ProtoModels::Tourney*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& IDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& iD_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& NameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& name_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& StartTimeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& startTime_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& EndTimeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& endTime_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& StateFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ProtoModels::TourneyState> R& state_() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> static R& PlayersFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	 static FieldCodec1<ProtoModels::Player*>*& _repeated_players_codec() {
		return *(FieldCodec1<ProtoModels::Player*>**)((uintptr_t)StaticClass()->static_fields + 0x8);
	}
	 RepeatedField1<ProtoModels::Player*>*& players_() {
		return *(RepeatedField1<ProtoModels::Player*>**)((uintptr_t)this + 0x38);
	}
	template <typename R = int32_t> static R& MaxPlayersCountFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& maxPlayersCount_() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = int32_t> static R& FakePlayersCountFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& fakePlayersCount_() {
		return *(R*)((uintptr_t)this + 0x44);
	}

	 static MessageParser1<ProtoModels::Tourney*>* get_Parser() {
		return ((MessageParser1<ProtoModels::Tourney*>* (*)(void *))(Il2CppBase() + 0x150B6EC))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x150B750))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(Tourney*))(Il2CppBase() + 0x150B870))(this);
	}
	template <typename R = ProtoModels::Tourney*> R Clone() {
		return ((R (*)(Tourney*))(Il2CppBase() + 0x150BA30))(this);
	}
	template <typename R = int64_t> R get_ID() {
		return ((R (*)(Tourney*))(Il2CppBase() + 0x150BA8C))(this);
	}
	template <typename R = void> R set_ID(int64_t value) {
		return ((R (*)(Tourney*, int64_t))(Il2CppBase() + 0x150BA94))(this, value);
	}
	template <typename R = Il2CppString*> R get_Name() {
		return ((R (*)(Tourney*))(Il2CppBase() + 0x150BA9C))(this);
	}
	template <typename R = void> R set_Name(Il2CppString* value) {
		return ((R (*)(Tourney*, Il2CppString*))(Il2CppBase() + 0x150BAA4))(this, value);
	}
	template <typename R = int64_t> R get_StartTime() {
		return ((R (*)(Tourney*))(Il2CppBase() + 0x150BB24))(this);
	}
	template <typename R = void> R set_StartTime(int64_t value) {
		return ((R (*)(Tourney*, int64_t))(Il2CppBase() + 0x150BB2C))(this, value);
	}
	template <typename R = int64_t> R get_EndTime() {
		return ((R (*)(Tourney*))(Il2CppBase() + 0x150BB34))(this);
	}
	template <typename R = void> R set_EndTime(int64_t value) {
		return ((R (*)(Tourney*, int64_t))(Il2CppBase() + 0x150BB3C))(this, value);
	}
	template <typename R = ProtoModels::TourneyState> R get_State() {
		return ((R (*)(Tourney*))(Il2CppBase() + 0x150BB44))(this);
	}
	template <typename R = void> R set_State(ProtoModels::TourneyState value) {
		return ((R (*)(Tourney*, ProtoModels::TourneyState))(Il2CppBase() + 0x150BB4C))(this, value);
	}
	 RepeatedField1<ProtoModels::Player*>* get_Players() {
		return ((RepeatedField1<ProtoModels::Player*>* (*)(Tourney*))(Il2CppBase() + 0x150BB54))(this);
	}
	template <typename R = int32_t> R get_MaxPlayersCount() {
		return ((R (*)(Tourney*))(Il2CppBase() + 0x150BB5C))(this);
	}
	template <typename R = void> R set_MaxPlayersCount(int32_t value) {
		return ((R (*)(Tourney*, int32_t))(Il2CppBase() + 0x150BB64))(this, value);
	}
	template <typename R = int32_t> R get_FakePlayersCount() {
		return ((R (*)(Tourney*))(Il2CppBase() + 0x150BB6C))(this);
	}
	template <typename R = void> R set_FakePlayersCount(int32_t value) {
		return ((R (*)(Tourney*, int32_t))(Il2CppBase() + 0x150BB74))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(Tourney*, Il2CppObject*))(Il2CppBase() + 0x150BB7C))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::Tourney* other) {
		return ((R (*)(Tourney*, ProtoModels::Tourney*))(Il2CppBase() + 0x150BBEC))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(Tourney*))(Il2CppBase() + 0x150BCE8))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(Tourney*))(Il2CppBase() + 0x150BE00))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(Tourney*, uintptr_t))(Il2CppBase() + 0x150BE64))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(Tourney*))(Il2CppBase() + 0x150C050))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::Tourney* other) {
		return ((R (*)(Tourney*, ProtoModels::Tourney*))(Il2CppBase() + 0x150C2B0))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(Tourney*, uintptr_t))(Il2CppBase() + 0x150C37C))(this, input);
	}

};

}
